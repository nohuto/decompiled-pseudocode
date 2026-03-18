/*
 * XREFs of rimPopulateContactFrameData @ 0x1C01120A8
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C011255C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     rimExtractPointerDeviceUsages @ 0x1C0111434 (rimExtractPointerDeviceUsages.c)
 *     rimTransformGeometry @ 0x1C01129FC (rimTransformGeometry.c)
 */

__int64 __fastcall rimPopulateContactFrameData(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        int *a12,
        _QWORD *a13)
{
  __int64 v14; // r13
  struct _HIDP_PREPARSED_DATA *v16; // rax
  __int64 v17; // rdi
  int v18; // ebx
  __int64 v19; // r14
  __int64 v20; // rax
  int PointerDeviceUsages; // ebx
  int v22; // r8d
  struct _HIDP_PREPARSED_DATA *v24; // [rsp+A0h] [rbp+8h]

  v14 = *(_QWORD *)(a2 + 472);
  v16 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 456) + 16LL);
  v17 = *(_QWORD *)(v14 + 776);
  v18 = *(_DWORD *)(v14 + 748);
  v19 = a7 + 2328;
  *(_DWORD *)(a7 + 2320) |= 2u;
  v24 = v16;
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  *a13 = *(_QWORD *)(a7 + 36);
  *a12 = (*(_DWORD *)(a7 + 8) >> 3) & 1;
  memset((void *)(a7 + 2328), 0, 0xD8uLL);
  *(_DWORD *)(a7 + 2328) = *(_DWORD *)a7;
  *(_DWORD *)(a7 + 2376) = a6;
  *(_WORD *)(a7 + 2384) = *(_WORD *)(a7 + 4);
  *(_WORD *)(a7 + 2386) = a5;
  *(_DWORD *)(a7 + 2456) = v18;
  *(_QWORD *)(a7 + 2472) = v17;
  if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
    v20 = *(_QWORD *)(a2 + 24);
  else
    v20 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a7 + 2408) = v20;
  PointerDeviceUsages = rimExtractPointerDeviceUsages(
                          v14,
                          v24,
                          a3,
                          a4,
                          *(_QWORD *)(a1 + 768) == 0LL,
                          *(unsigned __int8 *)(a1 + 961),
                          v19,
                          a8,
                          a9,
                          a10,
                          a11);
  if ( PointerDeviceUsages >= 0 )
  {
    if ( !*a8 )
    {
      v22 = (*(_DWORD *)(a7 + 8) >> 3) & 1;
      *(_DWORD *)(a7 + 2320) ^= (*(_DWORD *)(a7 + 2320) ^ ~(*(_DWORD *)(a7 + 2404) >> 22)) & 4;
      rimTransformGeometry(v14, -__CFSHR__(*(_DWORD *)(a2 + 184), 25), v22, v19, (__int64)a13, (__int64)a12);
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x33u,
      (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
  }
  return (unsigned int)PointerDeviceUsages;
}
