/*
 * XREFs of rimProcessInput @ 0x1C00A4A80
 * Callers:
 *     rimStackAttachAndProcessInput @ 0x1C00A49F0 (rimStackAttachAndProcessInput.c)
 *     RIMCompleteSecondaryRimReads @ 0x1C0101244 (RIMCompleteSecondaryRimReads.c)
 *     rimProcessHidInput @ 0x1C010BC90 (rimProcessHidInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0018F24 (RimDeviceTypeToRimInputType.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     RIMFreeUserMem @ 0x1C0105480 (RIMFreeUserMem.c)
 *     rimAllocUserMemInternal @ 0x1C0105500 (rimAllocUserMemInternal.c)
 *     RIMFixUpCompleteFrame @ 0x1C010D518 (RIMFixUpCompleteFrame.c)
 */

unsigned __int64 __fastcall rimProcessInput(__int64 a1, __int64 a2, const void *a3, __m128i *a4, int a5)
{
  __m128i v8; // xmm6
  int v9; // r12d
  unsigned __int64 v10; // xmm0_8
  unsigned __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _OWORD *v18; // rcx
  char *v19; // rcx
  __int64 v20; // [rsp+38h] [rbp-50h] BYREF
  __m128i v21; // [rsp+40h] [rbp-48h]

  v21 = *a4;
  v8 = v21;
  v9 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  v10 = _mm_srli_si128(v21, 8).m128i_u64[0];
  if ( *(_BYTE *)(a1 + 784) )
  {
    result = *(unsigned int *)(a1 + 824);
    if ( v10 > result )
    {
      v20 = 0LL;
      rimAllocUserMemInternal(a1, v10, &v20);
      if ( v20 )
      {
        v14 = *(_QWORD **)(a1 + 816);
        result = MmUserProbeAddress;
        if ( (unsigned __int64)v14 >= MmUserProbeAddress )
          v14 = (_QWORD *)MmUserProbeAddress;
        *v14 = v20;
      }
      else
      {
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   3u,
                   0x13u,
                   0xFu,
                   (__int64)&WPP_7f939aa136043ee70ba1a66d38f0357a_Traceguids);
        v21.m128i_i32[0] = -1073741801;
        v8 = v21;
      }
    }
    if ( v21.m128i_i32[0] < 0 )
    {
      *(_BYTE *)(a1 + 712) = 1;
    }
    else
    {
      v15 = *(_DWORD **)(a1 + 792);
      if ( (unsigned __int64)v15 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = v9;
      v16 = *(_QWORD *)(a2 + 352);
      if ( !v16 )
        v16 = *(_QWORD *)(a2 + 16);
      v17 = *(_QWORD **)(a1 + 800);
      if ( (unsigned __int64)v17 >= MmUserProbeAddress )
        v17 = (_QWORD *)MmUserProbeAddress;
      *v17 = v16;
      v18 = *(_OWORD **)(a1 + 808);
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (_OWORD *)MmUserProbeAddress;
      *v18 = v8;
      v19 = **(char ***)(a1 + 816);
      if ( (unsigned __int64)&v19[v10] > MmUserProbeAddress || &v19[v10] <= v19 )
        *(_BYTE *)MmUserProbeAddress = 0;
      result = (unsigned __int64)memmove(v19, a3, v10);
      if ( a5 )
        return RIMFixUpCompleteFrame(a1, a2, **(_QWORD **)(a1 + 816), a3);
    }
  }
  else
  {
    if ( v10 > *(unsigned int *)(a1 + 824) )
    {
      v13 = Win32AllocPool(v10, 0x656D4B52u);
      if ( v13 )
      {
        **(_QWORD **)(a1 + 816) = v13;
      }
      else
      {
        v21.m128i_i32[0] = -1073741801;
        v8 = v21;
      }
    }
    result = *(_QWORD *)(a1 + 808);
    *(__m128i *)result = v8;
    if ( v21.m128i_i32[0] >= 0 )
    {
      **(_DWORD **)(a1 + 792) = v9;
      if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
      {
        v12 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v12 = *(_QWORD *)(a2 + 352);
        if ( !v12 )
          v12 = *(_QWORD *)(a2 + 16);
      }
      **(_QWORD **)(a1 + 800) = v12;
      result = (unsigned __int64)memmove(**(void ***)(a1 + 816), a3, v10);
      if ( a5 )
        return RIMFixUpCompleteFrame(a1, a2, **(_QWORD **)(a1 + 816), a3);
    }
  }
  return result;
}
