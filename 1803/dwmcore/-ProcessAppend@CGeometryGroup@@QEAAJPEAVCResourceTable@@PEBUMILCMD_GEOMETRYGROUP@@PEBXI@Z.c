/*
 * XREFs of ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801AA790
 * Callers:
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801AB13C (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x180051A84 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180051ACC (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800BF2F0 (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CGeometryGroup::ProcessAppend(
        CGeometryGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        unsigned int *a4,
        unsigned int a5)
{
  __m128i v5; // xmm0
  signed int v6; // ebx
  char *v7; // rdi
  __m128i v8; // xmm0
  char v9; // r12
  int v11; // eax
  void *v12; // rbp
  __int64 v13; // r14
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  unsigned int v16; // eax
  __int64 v17; // rax
  void *v18; // rcx
  int v19; // r9d
  __int64 v21; // [rsp+20h] [rbp-68h]
  unsigned int v22; // [rsp+20h] [rbp-68h]
  void *Src; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int *v25; // [rsp+A8h] [rbp+20h] BYREF

  v5 = *a3;
  v6 = 0;
  v25 = a4;
  v24 = 0;
  v7 = 0LL;
  v8 = _mm_srli_si128(v5, 8);
  v9 = 0;
  if ( !v8.m128i_i32[1] )
    return (unsigned int)v6;
  v11 = CResource::UnmarshalResourceArray(&v25, &a5, _mm_cvtsi128_si32(v8), 0x3Cu, v21, &v24, &Src, (__int64)a2, 0);
  v12 = Src;
  v6 = v11;
  v13 = v24;
  if ( v11 < 0 )
  {
    v22 = 887;
    goto LABEL_24;
  }
  if ( !v24 )
    goto LABEL_26;
  v14 = *((_DWORD *)this + 40);
  v15 = -1;
  v16 = v14 + v24;
  if ( v14 + v24 >= v14 )
    v15 = v14 + v24;
  v6 = v16 < v14 ? 0x80070216 : 0;
  if ( v16 >= v14 )
  {
    v11 = CResource::RegisterNNotifiersInternal(this, (struct CResource **)Src, v24);
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
      if ( v6 >= 0 )
      {
        v17 = *((unsigned int *)this + 40);
        if ( (_DWORD)v17 )
        {
          memcpy_0(v7, *((const void **)this + 21), 8LL * (unsigned int)v17);
          v17 = *((unsigned int *)this + 40);
        }
        memcpy_0(&v7[8 * v17], v12, 8 * v13);
        v18 = (void *)*((_QWORD *)this + 21);
        if ( v18 )
          operator delete(v18);
        *((_QWORD *)this + 21) = v7;
        v7 = 0LL;
        *((_DWORD *)this + 40) = v15;
        operator delete(v12);
        v12 = 0LL;
        goto LABEL_26;
      }
      v22 = 903;
      goto LABEL_20;
    }
    v22 = 896;
LABEL_24:
    v19 = v11;
    goto LABEL_25;
  }
  v22 = 893;
LABEL_20:
  v19 = v6;
LABEL_25:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v22);
LABEL_26:
  if ( v6 < 0 )
  {
    if ( v9 )
      CResource::UnRegisterNNotifiersInternal(this, (struct CResource **)v12, v13);
    if ( v12 )
      operator delete(v12);
    if ( v7 )
      operator delete(v7);
  }
  return (unsigned int)v6;
}
