/*
 * XREFs of ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00F8BC0
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00ABC7C (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x1C00A4550 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall EnforceSDCCloneSourceIndexCoherency(unsigned int a1, __int64 a2, __int64 a3)
{
  char v3; // r13
  __int64 v4; // rsi
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v5; // r12
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *i; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int8 v11; // r15
  __int64 v12; // rax
  __int64 v14; // r9
  __int64 v15; // rax

  v3 = 0;
  v4 = 0LL;
  v5 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)a2;
  if ( a1 )
  {
    for ( i = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)a2;
          ;
          i = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)i + 192) )
    {
      if ( *(__int64 *)i < 0 )
      {
        v8 = v4;
        if ( (unsigned int)v4 < a1 )
          break;
      }
LABEL_19:
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= a1 )
        return 0LL;
    }
    v9 = 192 * v4;
    v10 = (__int64)v5 + 192 * v4 + 16;
    while ( 1 )
    {
      if ( v8 != (_DWORD)v4 )
      {
        v11 = 0;
        if ( *(_DWORD *)(v10 + 8) == *((_DWORD *)i + 6)
          && *(_DWORD *)v10 == *((_DWORD *)i + 4)
          && *(_DWORD *)(v10 + 4) == *((_DWORD *)i + 5) )
        {
          v11 = 1;
          if ( *(_DWORD *)(v10 + 140) != *((_DWORD *)i + 39) )
          {
            v12 = WdLogNewEntry5_WdError(v9, a2, a3);
            *(_QWORD *)(v12 + 24) = (unsigned int)v4;
            *(_QWORD *)(v12 + 32) = v8;
            WdLogEvent5_WdError(v12);
            return 3221225485LL;
          }
LABEL_13:
          v9 = *(_QWORD *)(v10 - 16);
          a3 = (v11 + 0x40000000208LL) << 8;
          v14 = a3 & *(_QWORD *)i;
          if ( (a3 & v9) != v14 )
          {
            a2 = ~a3;
            v15 = ~a3 & *(_QWORD *)(v10 - 8);
            *(_QWORD *)(v10 - 16) = v14 | ~a3 & v9;
            v9 = v15 | a3 & *((_QWORD *)i + 1);
            *(_QWORD *)(v10 - 8) = v9;
            if ( !v3 )
            {
              v3 = 1;
              DrvDxgkLogCodePointPacket(0x39u, v4, v8, 0);
            }
          }
          *(_QWORD *)(v10 + 108) = *(_QWORD *)((char *)i + 124);
          *(_QWORD *)(v10 + 116) = *(_QWORD *)((char *)i + 132);
          *(_DWORD *)(v10 + 140) = *((_DWORD *)i + 39);
          *(_QWORD *)(v10 + 100) = *(_QWORD *)((char *)i + 116);
          if ( v11 )
          {
            *(_QWORD *)(v10 + 72) = *((_QWORD *)i + 11);
            *(_DWORD *)(v10 + 80) = *((_DWORD *)i + 24);
          }
          goto LABEL_18;
        }
        if ( *(_DWORD *)(v10 + 140) == *((_DWORD *)i + 39) )
          goto LABEL_13;
      }
LABEL_18:
      ++v8;
      v10 += 192LL;
      if ( v8 >= a1 )
        goto LABEL_19;
    }
  }
  return 0LL;
}
