/*
 * XREFs of ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00D1500
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C0079FAC (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x1C00D4800 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall EnforceSDCCloneSourceIndexCoherency(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3)
{
  char v3; // r13
  unsigned int v4; // esi
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *i; // rdi
  unsigned int v8; // ebp
  char *v9; // rbx
  __int64 v10; // rcx
  unsigned __int8 v11; // r15
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v18; // rax

  v3 = 0;
  v4 = 0;
  if ( !a1 )
    return 0LL;
  for ( i = a2; ; i = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)i + 200) )
  {
    if ( *(__int64 *)i < 0 )
    {
      v8 = v4;
      if ( v4 < a1 )
        break;
    }
LABEL_26:
    if ( ++v4 >= a1 )
      return 0LL;
  }
  v9 = (char *)a2 + 200 * v4 + 16;
  while ( 1 )
  {
    if ( v8 != v4 )
    {
      v10 = *((unsigned int *)v9 + 2);
      v11 = 0;
      v12 = *((unsigned int *)i + 6);
      if ( (_DWORD)v10 == (_DWORD)v12
        && *(_DWORD *)v9 == *((_DWORD *)i + 4)
        && *((_DWORD *)v9 + 1) == *((_DWORD *)i + 5)
        && (_DWORD)v10 != -2 )
      {
        v13 = *((_DWORD *)v9 + 35) == *((_DWORD *)i + 39);
        goto LABEL_19;
      }
      if ( *((_DWORD *)v9 + 35) == *((_DWORD *)i + 39) )
        break;
    }
LABEL_25:
    ++v8;
    v9 += 200;
    if ( v8 >= a1 )
      goto LABEL_26;
  }
  if ( *(_DWORD *)v9 != *((_DWORD *)i + 4)
    || *((_DWORD *)v9 + 1) != *((_DWORD *)i + 5)
    || (_DWORD)v10 != -2 && (_DWORD)v12 != -2
    || v9[85] )
  {
    goto LABEL_20;
  }
  v13 = (_DWORD)v10 == (_DWORD)v12;
LABEL_19:
  v11 = 1;
  if ( v13 )
  {
LABEL_20:
    a3 = *((_QWORD *)v9 - 2);
    v14 = (v11 + 0x40000000208LL) << 8;
    v15 = *(_QWORD *)i & v14;
    if ( (a3 & v14) != v15 )
    {
      v16 = *((_QWORD *)v9 - 1) & ~v14;
      a3 = v15 | ~v14 & a3;
      *((_QWORD *)v9 - 2) = a3;
      *((_QWORD *)v9 - 1) = v16 | v14 & *((_QWORD *)i + 1);
      if ( !v3 )
      {
        v3 = 1;
        DrvDxgkLogCodePointPacket(57LL, v4, v8);
      }
    }
    *(_QWORD *)(v9 + 108) = *(_QWORD *)((char *)i + 124);
    *(_QWORD *)(v9 + 116) = *(_QWORD *)((char *)i + 132);
    *((_DWORD *)v9 + 35) = *((_DWORD *)i + 39);
    *(_QWORD *)(v9 + 100) = *(_QWORD *)((char *)i + 116);
    if ( v11 )
    {
      *((_QWORD *)v9 + 9) = *((_QWORD *)i + 11);
      *((_DWORD *)v9 + 20) = *((_DWORD *)i + 24);
    }
    goto LABEL_25;
  }
  v18 = WdLogNewEntry5_WdError(v10, v12, a3);
  *(_QWORD *)(v18 + 24) = v4;
  *(_QWORD *)(v18 + 32) = v8;
  WdLogEvent5_WdError(v18);
  return 3221225485LL;
}
