/*
 * XREFs of ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x180004384
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x180004290 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x180034E50 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180034E98 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800C06C8 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
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
  char *v15; // r14
  __m128i v16; // xmm0
  int v18; // eax
  struct CResource **v19; // r15
  __int64 v20; // r12
  unsigned int v21; // eax
  unsigned int v22; // r13d
  unsigned int v23; // eax
  void *v24; // rcx
  unsigned int v25; // [rsp+20h] [rbp-50h]
  unsigned int v26; // [rsp+20h] [rbp-50h]
  unsigned int v27; // [rsp+50h] [rbp-20h] BYREF
  const void *v28; // [rsp+58h] [rbp-18h] BYREF
  void *Src; // [rsp+60h] [rbp-10h]
  const void *v30; // [rsp+C0h] [rbp+50h] BYREF
  struct CResource **v31; // [rsp+C8h] [rbp+58h]

  v5 = *a3;
  v30 = a4;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( !HIDWORD(v9) )
  {
    CTransform3DGroup::UnRegisterNotifiers(this);
    v10 = UnmarshalResourceArray(&v30, &a5, (unsigned int)v9, 62LL);
    v11 = v31;
    v12 = v10;
    *((_QWORD *)this + 23) = v31;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x9FCu);
LABEL_40:
      CTransform3DGroup::UnRegisterNotifiers(this);
      goto LABEL_8;
    }
    v13 = CResource::RegisterNNotifiersInternal(this, v11, *((_DWORD *)this + 44));
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA98u);
    if ( v12 < 0 )
    {
      v25 = 2559;
LABEL_39:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v25);
      goto LABEL_40;
    }
  }
  v12 = 0;
  v14 = *a3;
  LODWORD(v31) = 0;
  v15 = 0LL;
  v27 = a5;
  v16 = _mm_srli_si128(v14, 8);
  v28 = a4;
  LOBYTE(v30) = 0;
  if ( v16.m128i_i32[1] )
  {
    v18 = UnmarshalResourceArray(&v28, &v27, (unsigned int)_mm_cvtsi128_si32(v16), 62LL);
    v19 = (struct CResource **)Src;
    v12 = v18;
    v20 = (unsigned int)v31;
    if ( v18 < 0 )
    {
      v26 = 2627;
    }
    else
    {
      if ( !(_DWORD)v31 )
      {
LABEL_31:
        if ( v12 >= 0 )
          goto LABEL_8;
        if ( (_BYTE)v30 )
          CResource::UnRegisterNNotifiersInternal(this, v19, v20);
        goto LABEL_34;
      }
      v21 = *((_DWORD *)this + 44);
      v22 = v21 + (_DWORD)v31;
      if ( v21 + (unsigned int)v31 < v21 )
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xA49u);
LABEL_34:
        if ( v19 )
          WPF::ProcessHeapImpl::Free(v19);
        if ( v15 )
          WPF::ProcessHeapImpl::Free(v15);
        goto LABEL_7;
      }
      v18 = CResource::RegisterNNotifiersInternal(this, (struct CResource **)Src, (unsigned int)v31);
      v12 = v18;
      if ( v18 >= 0 )
      {
        LOBYTE(v30) = 1;
        v12 = 0;
        if ( v22 && 0xFFFFFFFFFFFFFFFFuLL / v22 > 8 )
        {
          v15 = (char *)WPF::ProcessHeapImpl::AllocClear(8LL * v22);
          if ( !v15 )
            v12 = -2147024882;
        }
        else
        {
          v12 = -2147024809;
        }
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xA55u);
        }
        else
        {
          v23 = *((_DWORD *)this + 44);
          if ( v23 )
            memcpy_0(v15, *((const void **)this + 23), 8LL * v23);
          memcpy_0(&v15[8 * *((unsigned int *)this + 44)], v19, 8 * v20);
          v24 = (void *)*((_QWORD *)this + 23);
          if ( v24 )
            WPF::ProcessHeapImpl::Free(v24);
          *((_QWORD *)this + 23) = v15;
          v15 = 0LL;
          *((_DWORD *)this + 44) = v22;
          WPF::ProcessHeapImpl::Free(v19);
          v19 = 0LL;
        }
        goto LABEL_31;
      }
      v26 = 2636;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v26);
    goto LABEL_31;
  }
LABEL_7:
  if ( v12 < 0 )
  {
    v25 = 2568;
    goto LABEL_39;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v12;
}
