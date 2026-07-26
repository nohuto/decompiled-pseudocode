/*
 * XREFs of WppTraceCallback @ 0x1C00D9060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ndisEnableWppTracingCallback @ 0x1C0050710 (ndisEnableWppTracingCallback.c)
 */

__int64 __fastcall WppTraceCallback(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int v7; // ebx
  unsigned int *v8; // rcx
  __int64 v10; // rbp
  unsigned int v11; // edi
  __int64 v12; // rax
  const void **v13; // r13
  unsigned int v14; // r12d
  unsigned int v15; // esi
  _WORD *v16; // rcx
  _DWORD *v17; // r14
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int *v24; // rsi
  char v25; // r15
  bool v26; // zf
  __int64 v28; // [rsp+30h] [rbp-38h]
  char v29; // [rsp+70h] [rbp+8h] BYREF

  v7 = 0;
  v8 = a6;
  *a6 = 0;
  if ( a1 <= 3u )
    return (unsigned int)-1073741808;
  if ( a1 > 5u )
  {
    if ( a1 <= 7u )
      return v7;
    if ( a1 == 8 )
    {
      v10 = a5;
      v11 = 0;
      v12 = a5;
      v13 = *(const void ***)(a5 + 32);
      do
      {
        v12 = *(_QWORD *)(v12 + 16);
        ++v11;
      }
      while ( v12 );
      if ( v11 > 0x3F )
        return (unsigned int)-1073741811;
      if ( v13 )
      {
        v14 = 32 * v11 + 24;
        v15 = v14 + *(unsigned __int16 *)v13 + 2;
      }
      else
      {
        v14 = 0;
        v15 = 32 * v11 + 24;
      }
      if ( v15 > a3 )
      {
        v7 = -1073741789;
        if ( a3 >= 4 )
        {
          *a4 = v15;
          *v8 = 4;
        }
      }
      else
      {
        memset(a4, 0, a3);
        *a4 = v15;
        a4[2] = v14;
        a4[4] = v11;
        if ( v13 )
        {
          v16 = (_WORD *)((char *)a4 + v14);
          *v16 = *(_WORD *)v13;
          memmove(v16 + 1, v13[1], *(unsigned __int16 *)v13);
        }
        if ( v11 )
        {
          v17 = a4 + 10;
          v18 = v11;
          do
          {
            v19 = *(_OWORD *)*(_QWORD *)(v10 + 8);
            *v17 = 528384;
            v17 += 8;
            *((_OWORD *)v17 - 3) = v19;
            *(_BYTE *)(v10 + 41) = 0;
            *(_DWORD *)(v10 + 44) = 0;
            v10 = *(_QWORD *)(v10 + 16);
            --v18;
          }
          while ( v18 );
        }
        *a6 = v15;
      }
      return v7;
    }
    return (unsigned int)-1073741808;
  }
  v20 = a5;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( a3 < 0x30 )
    return (unsigned int)-1073741811;
  do
  {
    if ( RtlCompareMemory(*(const void **)(v20 + 8), a4 + 6, 0x10uLL) == 16 )
      break;
    v20 = *(_QWORD *)(v20 + 16);
  }
  while ( v20 );
  if ( !v20 )
    return (unsigned int)-1073741163;
  if ( a1 == 5 )
  {
    v24 = (unsigned int *)(v20 + 44);
    *(_BYTE *)(v20 + 41) = 0;
    *(_DWORD *)(v20 + 44) = 0;
    v25 = 0;
    *(_QWORD *)(v20 + 24) = 0LL;
  }
  else
  {
    v26 = WPPTraceSuite == 2;
    v28 = *((_QWORD *)a4 + 1);
    *(_QWORD *)(v20 + 24) = v28;
    if ( v26 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, char *, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                            3LL,
                            &v29,
                            4LL,
                            &a6,
                            a4) )
        *(_BYTE *)(v20 + 41) = v29;
      v24 = (unsigned int *)(v20 + 44);
      v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
             2LL,
             v20 + 44,
             4LL,
             &a6,
             a4);
    }
    else
    {
      v24 = (unsigned int *)(v20 + 44);
      *(_DWORD *)(v20 + 44) = HIDWORD(v28);
      *(_BYTE *)(v20 + 41) = BYTE2(v28);
    }
    v25 = 1;
  }
  LOBYTE(v23) = v25;
  ndisEnableWppTracingCallback(v22, v21, v23, *v24, *(_BYTE *)(v20 + 41));
  return v7;
}
