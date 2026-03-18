/*
 * XREFs of rimProcessInput @ 0x1C0099D80
 * Callers:
 *     rimStackAttachAndProcessInput @ 0x1C0099CF0 (rimStackAttachAndProcessInput.c)
 *     RIMCompleteSecondaryRimReads @ 0x1C0100E00 (RIMCompleteSecondaryRimReads.c)
 *     rimProcessHidInput @ 0x1C010CD40 (rimProcessHidInput.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0050284 (RimDeviceTypeToRimInputType.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     RIMFreeUserMem @ 0x1C0105640 (RIMFreeUserMem.c)
 *     rimAllocUserMemInternal @ 0x1C01056C0 (rimAllocUserMemInternal.c)
 *     RIMFixUpCompleteFrame @ 0x1C010E5D0 (RIMFixUpCompleteFrame.c)
 */

unsigned __int64 __fastcall rimProcessInput(__int64 a1, __int64 a2, const void *a3, __m128i *a4, int a5)
{
  __m128i v8; // xmm6
  int v9; // r12d
  unsigned __int64 v10; // xmm0_8
  unsigned __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  CTouchProcessor *v15; // rcx
  CTouchProcessor *v16; // rcx
  __int64 v17; // rdx
  CTouchProcessor *v18; // rcx
  CTouchProcessor *v19; // rcx
  char *v20; // rcx
  unsigned __int64 v21; // [rsp+38h] [rbp-50h] BYREF
  __m128i v22; // [rsp+40h] [rbp-48h]

  v22 = *a4;
  v8 = v22;
  v9 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  v10 = _mm_srli_si128(v22, 8).m128i_u64[0];
  if ( *(_BYTE *)(a1 + 784) )
  {
    result = *(unsigned int *)(a1 + 824);
    if ( v10 > result )
    {
      v21 = 0LL;
      rimAllocUserMemInternal(a1, v10, &v21);
      result = v21;
      if ( v21 )
      {
        v15 = *(CTouchProcessor **)(a1 + 816);
        if ( v15 >= W32UserProbeAddress )
          v15 = W32UserProbeAddress;
        *(_QWORD *)v15 = v21;
      }
      else
      {
        LOBYTE(v14) = 3;
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   v14,
                   19,
                   15,
                   (__int64)&WPP_ec5b4285555b30105b420c8c4957b6f6_Traceguids);
        v22.m128i_i32[0] = -1073741801;
        v8 = v22;
      }
    }
    if ( v22.m128i_i32[0] < 0 )
    {
      *(_BYTE *)(a1 + 712) = 1;
    }
    else
    {
      v16 = *(CTouchProcessor **)(a1 + 792);
      if ( v16 >= W32UserProbeAddress )
        v16 = W32UserProbeAddress;
      *(_DWORD *)v16 = v9;
      v17 = *(_QWORD *)(a2 + 352);
      if ( !v17 )
        v17 = *(_QWORD *)(a2 + 16);
      v18 = *(CTouchProcessor **)(a1 + 800);
      if ( v18 >= W32UserProbeAddress )
        v18 = W32UserProbeAddress;
      *(_QWORD *)v18 = v17;
      v19 = *(CTouchProcessor **)(a1 + 808);
      if ( v19 >= W32UserProbeAddress )
        v19 = W32UserProbeAddress;
      *(__m128i *)v19 = v8;
      v20 = **(char ***)(a1 + 816);
      if ( &v20[v10] > (char *)W32UserProbeAddress || &v20[v10] <= v20 )
        *(_BYTE *)W32UserProbeAddress = 0;
      result = (unsigned __int64)memmove(v20, a3, v10);
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
        v22.m128i_i32[0] = -1073741801;
        v8 = v22;
      }
    }
    result = *(_QWORD *)(a1 + 808);
    *(__m128i *)result = v8;
    if ( v22.m128i_i32[0] >= 0 )
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
