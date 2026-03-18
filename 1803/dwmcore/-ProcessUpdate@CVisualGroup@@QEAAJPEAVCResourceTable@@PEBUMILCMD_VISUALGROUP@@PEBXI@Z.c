/*
 * XREFs of ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801A975C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800BF2F0 (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x1801A94C4 (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 *     ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801A9534 (-InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z.c)
 */

__int64 __fastcall CVisualGroup::ProcessUpdate(
        CVisualGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        unsigned int *a4,
        unsigned int a5)
{
  __m128i v6; // xmm6
  struct CVisual **v8; // rdi
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-31h]
  __int64 v14; // [rsp+28h] [rbp-31h]
  void *lpMem; // [rsp+58h] [rbp-1h] BYREF
  unsigned int *v16; // [rsp+60h] [rbp+7h] BYREF
  struct CVisual **v17; // [rsp+68h] [rbp+Fh] BYREF
  __m128i v18; // [rsp+70h] [rbp+17h]
  unsigned int v19; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v20; // [rsp+D0h] [rbp+77h] BYREF

  v6 = *a3;
  v16 = a4;
  v8 = 0LL;
  v18 = v6;
  CVisualGroup::ClearVisualGroupData(this);
  v9 = CResource::UnmarshalResourceArray(
         &v16,
         &a5,
         _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)),
         0x97u,
         v13,
         &v20,
         &lpMem,
         (__int64)a2,
         0);
  if ( v9 < 0 )
  {
    v11 = 105;
  }
  else
  {
    v10 = CResource::UnmarshalResourceArray(
            &v16,
            &a5,
            v18.m128i_u32[3],
            0x97u,
            v14,
            &v19,
            (void **)&v17,
            (__int64)a2,
            0);
    v8 = v17;
    v9 = v10;
    if ( v10 < 0 )
    {
      v11 = 119;
    }
    else
    {
      v9 = CVisualGroup::InitializeVisualGroupData((CComposition **)this, (struct CVisual **)lpMem, v20, v17, v19);
      if ( v9 >= 0 )
        goto LABEL_8;
      v11 = 122;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v11);
  CVisualGroup::ClearVisualGroupData(this);
LABEL_8:
  if ( lpMem )
    operator delete(lpMem);
  if ( v8 )
    operator delete(v8);
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v9;
}
