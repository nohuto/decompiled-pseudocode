/*
 * XREFs of ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18001977C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x1800195A0 (-UnRegisterNotifiers@CTransformGroup@@UEAAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x180051A84 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180051ACC (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800BF2F0 (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CTransformGroup::ProcessUpdate(
        CTransformGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        unsigned int a5)
{
  __m128i v5; // xmm0
  unsigned __int64 v9; // rbx
  int v10; // eax
  struct CResource **v11; // rdx
  int v12; // ebx
  int v13; // eax
  __m128i v14; // xmm0
  char *v15; // rsi
  char v16; // r13
  __m128i v17; // xmm0
  unsigned int v19; // eax
  int v20; // eax
  void *v21; // r14
  __int64 v22; // r15
  unsigned int v23; // ecx
  unsigned int v24; // r12d
  unsigned int v25; // eax
  __int64 v26; // rax
  void *v27; // rcx
  int v28; // r9d
  unsigned int v29; // [rsp+20h] [rbp-40h]
  const void *v30; // [rsp+50h] [rbp-10h] BYREF
  void *Src; // [rsp+58h] [rbp-8h]
  const void *v32; // [rsp+B0h] [rbp+50h] BYREF
  struct CResource **v33; // [rsp+B8h] [rbp+58h] BYREF

  v5 = *a3;
  v32 = a4;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( HIDWORD(v9) )
    goto LABEL_6;
  CTransformGroup::UnRegisterNotifiers(this);
  v10 = CResource::UnmarshalResourceArray(&v32, &a5, (unsigned int)v9, 142LL);
  v11 = v33;
  v12 = v10;
  *((_QWORD *)this + 23) = v33;
  if ( v10 < 0 )
  {
    v19 = 2829;
    goto LABEL_43;
  }
  v13 = CResource::RegisterNNotifiersInternal(this, v11, *((_DWORD *)this + 44));
  v12 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xB8Eu);
  if ( v12 < 0 )
  {
    v19 = 2832;
LABEL_43:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v19);
    CTransformGroup::UnRegisterNotifiers(this);
    goto LABEL_8;
  }
LABEL_6:
  v12 = 0;
  v14 = *a3;
  LODWORD(v32) = 0;
  v15 = 0LL;
  LODWORD(v33) = a5;
  v16 = 0;
  v17 = _mm_srli_si128(v14, 8);
  v30 = a4;
  if ( !v17.m128i_i32[1] )
    goto LABEL_7;
  v20 = CResource::UnmarshalResourceArray(&v30, &v33, (unsigned int)_mm_cvtsi128_si32(v17), 142LL);
  v21 = Src;
  v12 = v20;
  v22 = (unsigned int)v32;
  if ( v20 < 0 )
  {
    v29 = 2881;
    goto LABEL_33;
  }
  if ( (_DWORD)v32 )
  {
    v23 = *((_DWORD *)this + 44);
    v24 = -1;
    v25 = v23 + (_DWORD)v32;
    if ( v23 + (unsigned int)v32 >= v23 )
      v24 = v23 + (_DWORD)v32;
    v12 = v25 < v23 ? 0x80070216 : 0;
    if ( v25 < v23 )
    {
      v29 = 2887;
LABEL_30:
      v28 = v12;
LABEL_34:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, v29);
      goto LABEL_35;
    }
    v20 = CResource::RegisterNNotifiersInternal(this, (struct CResource **)Src, (unsigned int)v32);
    v12 = v20;
    if ( v20 >= 0 )
    {
      v16 = 1;
      v12 = 0;
      if ( v24 && 0xFFFFFFFFFFFFFFFFuLL / v24 > 8 )
      {
        v15 = (char *)WPF::ProcessHeapImpl::AllocClear(8LL * v24);
        if ( !v15 )
          v12 = -2147024882;
      }
      else
      {
        v12 = -2147024809;
      }
      if ( v12 >= 0 )
      {
        v26 = *((unsigned int *)this + 44);
        if ( (_DWORD)v26 )
        {
          memcpy_0(v15, *((const void **)this + 23), 8LL * (unsigned int)v26);
          v26 = *((unsigned int *)this + 44);
        }
        memcpy_0(&v15[8 * v26], v21, 8 * v22);
        v27 = (void *)*((_QWORD *)this + 23);
        if ( v27 )
          operator delete(v27);
        *((_QWORD *)this + 23) = v15;
        v15 = 0LL;
        *((_DWORD *)this + 44) = v24;
        operator delete(v21);
        v21 = 0LL;
        goto LABEL_35;
      }
      v29 = 2897;
      goto LABEL_30;
    }
    v29 = 2890;
LABEL_33:
    v28 = v20;
    goto LABEL_34;
  }
LABEL_35:
  if ( v12 >= 0 )
    goto LABEL_8;
  if ( v16 )
    CResource::UnRegisterNNotifiersInternal(this, (struct CResource **)v21, v22);
  if ( v21 )
    operator delete(v21);
  if ( v15 )
    operator delete(v15);
LABEL_7:
  if ( v12 < 0 )
  {
    v19 = 2835;
    goto LABEL_43;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v12;
}
