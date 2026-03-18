/*
 * XREFs of ?ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x18017A51C
 * Callers:
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x18017B824 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x1800A9A6C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x1800A9AB4 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800B5D70 (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CTransform3DGroup::ProcessAppend(
        const void **this,
        struct CResourceTable *a2,
        __m128i *a3,
        unsigned int *a4,
        unsigned int a5)
{
  __m128i v5; // xmm0
  signed int v6; // ebx
  char *v7; // rsi
  __m128i v8; // xmm0
  char v9; // r12
  signed int v11; // eax
  struct CResource **v12; // rbp
  __int64 v13; // r14
  unsigned int v14; // eax
  unsigned int v15; // r15d
  unsigned int v16; // eax
  void *v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-68h]
  unsigned int v20; // [rsp+20h] [rbp-68h]
  void *Src; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int *v23; // [rsp+A8h] [rbp+20h] BYREF

  v5 = *a3;
  v6 = 0;
  v23 = a4;
  v22 = 0;
  v7 = 0LL;
  v8 = _mm_srli_si128(v5, 8);
  v9 = 0;
  if ( !v8.m128i_i32[1] )
    return (unsigned int)v6;
  v11 = CResource::UnmarshalResourceArray(
          &v23,
          (int *)&a5,
          _mm_cvtsi128_si32(v8),
          0x80u,
          v19,
          &v22,
          &Src,
          (__int64)a2,
          0);
  v12 = (struct CResource **)Src;
  v6 = v11;
  v13 = v22;
  if ( v11 < 0 )
  {
    v20 = 2679;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v20);
    goto LABEL_22;
  }
  if ( !v22 )
  {
LABEL_22:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    if ( v9 )
      CResource::UnRegisterNNotifiersInternal((CResource *)this, v12, v13);
    goto LABEL_25;
  }
  v14 = *((_DWORD *)this + 44);
  v15 = v14 + v22;
  if ( v14 + v22 >= v14 )
  {
    v11 = CResource::RegisterNNotifiersInternal((CResource *)this, (struct CResource **)Src, v22);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v9 = 1;
      v6 = 0;
      if ( v15 && 0xFFFFFFFFFFFFFFFFuLL / v15 > 8 )
      {
        v7 = (char *)WPF::ProcessHeapImpl::AllocClear(8LL * v15);
        if ( !v7 )
          v6 = -2147024882;
      }
      else
      {
        v6 = -2147024809;
      }
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xA87u);
      }
      else
      {
        v16 = *((_DWORD *)this + 44);
        if ( v16 )
          memcpy_0(v7, this[23], 8LL * v16);
        memcpy_0(&v7[8 * *((unsigned int *)this + 44)], v12, 8 * v13);
        v17 = (void *)this[23];
        if ( v17 )
          WPF::ProcessHeapImpl::Free(v17);
        this[23] = v7;
        v7 = 0LL;
        *((_DWORD *)this + 44) = v15;
        WPF::ProcessHeapImpl::Free(v12);
        v12 = 0LL;
      }
      goto LABEL_22;
    }
    v20 = 2688;
    goto LABEL_21;
  }
  v6 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0xA7Du);
LABEL_25:
  if ( v12 )
    WPF::ProcessHeapImpl::Free(v12);
  if ( v7 )
    WPF::ProcessHeapImpl::Free(v7);
  return (unsigned int)v6;
}
