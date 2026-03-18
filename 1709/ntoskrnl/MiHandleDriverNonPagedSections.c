/*
 * XREFs of MiHandleDriverNonPagedSections @ 0x140543D68
 * Callers:
 *     MiSessionRemoveImage @ 0x140158EEC (MiSessionRemoveImage.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockCodePage @ 0x1400BD400 (MiUnlockCodePage.c)
 *     MiSnapDriverRange @ 0x140516C14 (MiSnapDriverRange.c)
 *     MiDisablePagingOfDriver @ 0x140542B58 (MiDisablePagingOfDriver.c)
 *     MiFindDriverNonPagedSections @ 0x140543ED0 (MiFindDriverNonPagedSections.c)
 */

__int64 __fastcall MiHandleDriverNonPagedSections(__int64 a1, char a2, int a3)
{
  unsigned int v6; // edi
  char v7; // r15
  __int64 *v8; // rbx
  char v9; // r12
  unsigned int v10; // r15d
  __int64 *v11; // r14
  unsigned int v12; // eax
  __int64 *v13; // rbx
  unsigned int v15; // ebx
  unsigned __int64 v16[2]; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 *v18; // [rsp+88h] [rbp+48h] BYREF

  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 48)) )
  {
    v6 = 0;
    v7 = 1;
    if ( a3 == 1 )
    {
      if ( (dword_140400104 & 1) == 0 && (a2 & 2) == 0 )
      {
        if ( (a2 & 1) == 0 )
        {
          MiDisablePagingOfDriver(a1);
          v7 = 2;
        }
LABEL_7:
        v17 = 0;
        v8 = 0LL;
        v18 = 0LL;
        while ( (int)MiFindDriverNonPagedSections(a1, &v17, &v18, v16) >= 0 )
        {
          if ( a3 == 1 )
          {
            v6 = MiLockCode(a1, (unsigned __int64)v18, v16[0], v7);
            if ( (v6 & 0x80000000) != 0 )
            {
              v8 = v18;
              a3 = 0;
              v17 = 0;
            }
          }
          else
          {
            if ( v18 == v8 )
              return v6;
            MiUnlockCodePage(v18, v16[0]);
          }
        }
        return v6;
      }
      v9 = ((a2 & 1) == 0) + 1;
      if ( ((a2 & 1) == 0) == -1 )
        return v6;
      v10 = 0;
      v11 = 0LL;
      while ( 1 )
      {
        v12 = MiSnapDriverRange(a1, v10, 8, 0LL, (unsigned __int64 *)&v18, v16);
        v13 = v18;
        v10 = v12;
        if ( !v18 )
          goto LABEL_17;
        if ( v11 )
        {
          if ( v18 == v11 )
            return v6;
          MiUnlockCodePage(v18, v16[0]);
LABEL_17:
          if ( !v10 )
            return v6;
        }
        else
        {
          v6 = MiLockCode(a1, (unsigned __int64)v18, v16[0], v9);
          if ( (v6 & 0x80000000) == 0 )
            goto LABEL_17;
          v10 = 0;
          v11 = v13;
        }
      }
    }
    if ( (dword_140400104 & 1) == 0 )
      goto LABEL_7;
    v15 = 0;
    do
    {
      v15 = MiSnapDriverRange(a1, v15, 8, 0LL, (unsigned __int64 *)&v18, v16);
      if ( v18 )
        MiUnlockCodePage(v18, v16[0]);
    }
    while ( v15 );
  }
  return 0LL;
}
