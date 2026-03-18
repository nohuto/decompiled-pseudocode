/*
 * XREFs of ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x18017B824
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x1800A9AB4 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x1800B4640 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800B5D70 (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     ?ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x18017A51C (-ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 */

__int64 __fastcall CTransform3DGroup::ProcessUpdate(
        CTransform3DGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        unsigned int *a4,
        unsigned int a5)
{
  __m128i v5; // xmm0
  unsigned __int64 v9; // xmm0_8
  signed int v11; // eax
  struct CResource **v12; // rdx
  signed int v13; // ebx
  signed int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-58h]
  unsigned int v17; // [rsp+20h] [rbp-58h]
  unsigned int *v18; // [rsp+90h] [rbp+18h] BYREF
  struct CResource **v19; // [rsp+98h] [rbp+20h] BYREF

  v5 = *a3;
  v18 = a4;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( !HIDWORD(v9) )
  {
    CTransform3DGroup::UnRegisterNotifiers(this);
    v11 = CResource::UnmarshalResourceArray(
            &v18,
            (int *)&a5,
            v9,
            0x80u,
            v16,
            (unsigned int *)this + 44,
            (void **)&v19,
            (__int64)a2,
            0);
    v12 = v19;
    v13 = v11;
    *((_QWORD *)this + 23) = v19;
    if ( v11 < 0 )
    {
      v17 = 2628;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v17);
      goto LABEL_11;
    }
    v14 = CResource::RegisterNNotifiersInternal(this, v12, *((_DWORD *)this + 44));
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0xAC3u);
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xA47u);
LABEL_11:
      CTransform3DGroup::UnRegisterNotifiers(this);
      goto LABEL_12;
    }
  }
  v11 = CTransform3DGroup::ProcessAppend((const void **)this, a2, a3, a4, a5);
  v13 = v11;
  if ( v11 < 0 )
  {
    v17 = 2634;
    goto LABEL_10;
  }
LABEL_12:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v13;
}
