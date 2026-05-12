/*
 * XREFs of WppTraceCallback @ 0x1C00680D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001F340 (memmove.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     WppInitGlobalLogger @ 0x1C0067E24 (WppInitGlobalLogger.c)
 */

__int64 __fastcall WppTraceCallback(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // r12
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rax
  const void **v12; // r15
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  unsigned int v15; // esi
  _WORD *v16; // rcx
  __int64 v17; // rcx
  _DWORD *v18; // r14
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v24; // [rsp+30h] [rbp-38h]
  char v25; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  *a6 = 0;
  if ( a1 <= 3u )
    return (unsigned int)-1073741808;
  if ( a1 > 5u )
  {
    if ( a1 <= 7u )
      return 0;
    if ( a1 == 8 )
    {
      v9 = a5;
      v10 = 0;
      v11 = a5;
      v12 = *(const void ***)(a5 + 32);
      do
      {
        v11 = *(_QWORD *)(v11 + 16);
        ++v10;
      }
      while ( v11 );
      if ( v10 > 0x3F )
        return (unsigned int)-1073741811;
      if ( v12 )
      {
        v14 = 32 * v10 + 24;
        v15 = v14 + *(unsigned __int16 *)v12 + 2;
      }
      else
      {
        v14 = 0;
        v15 = 32 * v10 + 24;
      }
      if ( v15 > a3 )
      {
        v13 = -1073741789;
        if ( a3 >= 4 )
        {
          *a4 = v15;
          *v6 = 4;
        }
      }
      else
      {
        memset(a4, 0, a3);
        *a4 = v15;
        a4[2] = v14;
        a4[4] = v10;
        if ( v12 )
        {
          v16 = (_WORD *)((char *)a4 + v14);
          *v16 = *(_WORD *)v12;
          memmove(v16 + 1, v12[1], *(unsigned __int16 *)v12);
        }
        v17 = v9;
        if ( v10 )
        {
          v18 = a4 + 10;
          v19 = v10;
          do
          {
            v20 = *(_OWORD *)*(_QWORD *)(v17 + 8);
            *v18 = 528384;
            v18 += 8;
            *((_OWORD *)v18 - 3) = v20;
            *(_BYTE *)(v17 + 41) = 0;
            *(_DWORD *)(v17 + 44) = 0;
            v17 = *(_QWORD *)(v17 + 16);
            --v19;
          }
          while ( v19 );
        }
        v13 = 0;
        *v6 = v15;
      }
      do
      {
        WppInitGlobalLogger(*(const GUID **)(v9 + 8), (_QWORD *)(v9 + 24), (int *)(v9 + 44), (_BYTE *)(v9 + 41));
        v9 = *(_QWORD *)(v9 + 16);
      }
      while ( v9 );
      return v13;
    }
    return (unsigned int)-1073741808;
  }
  v21 = a5;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( a3 < 0x30 )
    return (unsigned int)-1073741811;
  do
  {
    if ( RtlCompareMemory(*(const void **)(v21 + 8), a4 + 6, 0x10uLL) == 16 )
      break;
    v21 = *(_QWORD *)(v21 + 16);
  }
  while ( v21 );
  if ( !v21 )
    return (unsigned int)-1073741163;
  v13 = 0;
  if ( a1 == 5 )
  {
    *(_BYTE *)(v21 + 41) = 0;
    *(_DWORD *)(v21 + 44) = 0;
    *(_QWORD *)(v21 + 24) = 0LL;
  }
  else
  {
    v22 = LODWORD(WPP_MAIN_CB.Reserved) == 2;
    v24 = *((_QWORD *)a4 + 1);
    *(_QWORD *)(v21 + 24) = v24;
    if ( v22 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, char *, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                            3LL,
                            &v25,
                            4LL,
                            &a6,
                            a4) )
        *(_BYTE *)(v21 + 41) = v25;
      return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                             2LL,
                             v21 + 44,
                             4LL,
                             &a6,
                             a4);
    }
    else
    {
      *(_DWORD *)(v21 + 44) = HIDWORD(v24);
      *(_BYTE *)(v21 + 41) = BYTE2(v24);
    }
  }
  return v13;
}
