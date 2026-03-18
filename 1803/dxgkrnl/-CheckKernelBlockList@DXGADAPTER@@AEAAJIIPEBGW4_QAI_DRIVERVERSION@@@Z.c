/*
 * XREFs of ?CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01E9254
 * Callers:
 *     ?CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01E9174 (-CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1C001C5D6 (wcscmp_0.c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C01E9568 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C01E9778 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 *     DxgkFreeUnicodeString @ 0x1C01F03D8 (DxgkFreeUnicodeString.c)
 */

__int64 __fastcall DXGADAPTER::CheckKernelBlockList(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5)
{
  int BlockListStrings; // eax
  __int64 v7; // rcx
  __int64 v8; // r15
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rsi
  struct _UNICODE_STRING *v12; // r14
  unsigned int v13; // ebp
  unsigned __int16 v14; // ax
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  const wchar_t *v18; // rcx
  __int64 v19; // rdi
  unsigned int v20; // ebp
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // r12
  __int64 v23; // r13
  unsigned __int64 v24; // rax
  const wchar_t *v25; // rcx
  __int64 v26; // rdi
  struct _UNICODE_STRING *v27; // rbx
  unsigned int v29; // [rsp+40h] [rbp-1B8h] BYREF
  unsigned int v30[3]; // [rsp+44h] [rbp-1B4h] BYREF
  __m128i v31; // [rsp+50h] [rbp-1A8h]
  struct _UNICODE_STRING v32; // [rsp+60h] [rbp-198h] BYREF

  v29 = 0;
  BlockListStrings = FindBlockListStrings(
                       L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BlockList\\Kernel",
                       a2,
                       a3,
                       a4,
                       a5,
                       &v29,
                       &v32);
  v8 = v29;
  v9 = BlockListStrings;
  if ( v29 >= 0x14 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v10 + 24) = 703LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( (_DWORD)v8 )
  {
    v11 = v8;
    v12 = &v32;
    do
    {
      v13 = 0;
      v14 = _mm_cvtsi128_si32(*(__m128i *)v12);
      v31 = *(__m128i *)v12;
      v15 = v14;
      if ( v14 )
      {
        v16 = v31.m128i_i64[1];
        v17 = 0LL;
        do
        {
          v18 = (const wchar_t *)(v17 + v16);
          v19 = -1LL;
          do
            ++v19;
          while ( v18[v19] );
          if ( !(_DWORD)v19 )
            break;
          if ( !wcscmp_0(v18, L"GPU_PV_ALL") )
          {
            *((_DWORD *)this + 1011) |= 0x100u;
            break;
          }
          v13 += v19 + 1;
          v17 = 2LL * v13;
        }
        while ( v17 < v15 );
      }
      v20 = 0;
      v21 = _mm_cvtsi128_si32(*(__m128i *)v12);
      v31 = *(__m128i *)v12;
      v22 = v21;
      if ( v21 )
      {
        v23 = v31.m128i_i64[1];
        v24 = 0LL;
        do
        {
          v25 = (const wchar_t *)(v24 + v23);
          v26 = -1LL;
          do
            ++v26;
          while ( v25[v26] );
          if ( !(_DWORD)v26 )
            break;
          if ( !wcscmp_0(v25, L"GPU_PV_HIGH_SECURITY") )
          {
            *((_DWORD *)this + 1011) |= 0x400u;
            break;
          }
          v20 += v26 + 1;
          v24 = 2LL * v20;
        }
        while ( v24 < v22 );
      }
      ++v12;
      --v8;
    }
    while ( v8 );
    v30[0] = 0;
    v9 = ConvertStringsToOneMultiString(&v32, v29, (unsigned __int16 **)this + 506, v30);
    if ( v9 >= 0 )
      *((_DWORD *)this + 1014) = 2 * v30[0];
    if ( v9 == -1073741637 )
      *((_BYTE *)this + 4060) = 1;
    v27 = &v32;
    do
    {
      DxgkFreeUnicodeString(v27++);
      --v11;
    }
    while ( v11 );
  }
  return (unsigned int)v9;
}
