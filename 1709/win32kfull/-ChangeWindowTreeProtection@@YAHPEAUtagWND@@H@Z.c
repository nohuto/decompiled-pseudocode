/*
 * XREFs of ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02129AC
 * Callers:
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1C0212C94 (SetDisplayAffinity.c)
 * Callees:
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?Add@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z @ 0x1C0212970 (-Add@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z.c)
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C0212BC8 (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall ChangeWindowTreeProtection(struct tagWND *a1, int a2)
{
  unsigned int v3; // r14d
  struct tagBWL *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 *i; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // rbx
  __int64 v18; // rdi
  struct tagWND **v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v23; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-8h]
  int v25; // [rsp+2Ch] [rbp-4h]
  struct tagWND *v26; // [rsp+70h] [rbp+40h] BYREF
  __int64 v27; // [rsp+80h] [rbp+50h] BYREF

  v26 = a1;
  v3 = 0;
  v5 = BuildHwndList((__int64)a1, (struct tagWND *)1, 0LL);
  if ( v5 )
  {
    v23 = 0LL;
    v24 = 0;
    v25 = 0;
    if ( (int)CDynamicArray<tagWND *,2003858261>::Add((__int64)&v23, &v26) >= 0 )
    {
      v9 = *((_QWORD *)a1 + 2);
      v10 = 0LL;
      v11 = *(_QWORD *)(v9 + 400);
      if ( a1 == *(struct tagWND **)(v9 + 1352) )
      {
        v12 = *(_QWORD *)(v9 + 1360);
        if ( v12 )
          v10 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 400LL);
      }
      for ( i = (unsigned __int64 *)((char *)v5 + 32); *i != 1; ++i )
      {
        LOBYTE(v6) = 1;
        v14 = HMValidateHandleNoSecure(*i, v6, v7, v8);
        v27 = v14;
        if ( v14 && (*(_BYTE *)(v14 + 67) & 0x20) != 0 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 400LL);
          if ( a2 )
          {
            if ( v15 != v11 && v15 != v10 )
              goto LABEL_25;
          }
          if ( (int)CDynamicArray<tagWND *,2003858261>::Add((__int64)&v23, &v27) < 0 )
            goto LABEL_25;
        }
      }
    }
    v16 = v24;
    v17 = 0LL;
    v3 = 1;
    if ( v24 )
    {
      v18 = v23;
      while ( 1 )
      {
        if ( !(unsigned int)ProtectWindowBitmap(*(struct tagWND **)(v18 + 8 * v17), a2) )
        {
          v3 = 0;
          if ( a2 )
            break;
        }
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= v16 )
          goto LABEL_26;
      }
      if ( (_DWORD)v17 )
      {
        v19 = (struct tagWND **)(v18 + 8 * v17);
        do
        {
          ProtectWindowBitmap(*--v19, 0);
          LODWORD(v17) = v17 - 1;
        }
        while ( (_DWORD)v17 );
      }
    }
    else
    {
LABEL_25:
      v18 = v23;
    }
LABEL_26:
    FreeHwndList(v5);
    if ( v18 )
      Win32FreePool(v18, v20, v21);
  }
  return v3;
}
