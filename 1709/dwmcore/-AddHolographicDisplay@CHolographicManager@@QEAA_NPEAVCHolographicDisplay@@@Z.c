/*
 * XREFs of ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1801BFC88
 * Callers:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801BD1C8 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?GetDesc@CHolographicDisplay@@UEAAJPEAUHOLOGRAPHIC_DISPLAY_DESC@@@Z @ 0x1801BD0F0 (-GetDesc@CHolographicDisplay@@UEAAJPEAUHOLOGRAPHIC_DISPLAY_DESC@@@Z.c)
 *     ??$DwmHolographicDisplayAdd@AEAIAEAI@CompositorTracing@@SAXAEAI0@Z @ 0x1801BF33C (--$DwmHolographicDisplayAdd@AEAIAEAI@CompositorTracing@@SAXAEAI0@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicDisplay(RTL_SRWLOCK *this, RTL_SRWLOCK *a2)
{
  __int64 Ptr_low; // rcx
  bool v5; // di
  unsigned int v6; // edx
  unsigned int v7; // eax
  signed int v8; // esi
  signed int v9; // eax
  CHolographicInteropTaskQueue *Ptr; // rcx
  struct IUnknown *v11; // r8
  unsigned int v13; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v14[15]; // [rsp+44h] [rbp-54h] BYREF
  __int64 v15; // [rsp+80h] [rbp-18h]
  __int64 v16; // [rsp+88h] [rbp-10h]
  CMILCOMBase *v17; // [rsp+A8h] [rbp+10h] BYREF

  v17 = (CMILCOMBase *)a2;
  memset_0(&v13, 0, 0x3CuLL);
  v15 = 0LL;
  v16 = 0LL;
  CHolographicDisplay::GetDesc(a2 + 7, (struct HOLOGRAPHIC_DISPLAY_DESC *)&v13);
  CompositorTracing::DwmHolographicDisplayAdd<unsigned int &,unsigned int &>(&v13, v14);
  AcquireSRWLockExclusive(this + 10);
  Ptr_low = LODWORD(this[14].Ptr);
  v5 = 0;
  v6 = (unsigned int)v17;
  v7 = Ptr_low + 1;
  if ( (int)Ptr_low + 1 >= (unsigned int)Ptr_low )
    v6 = Ptr_low + 1;
  v8 = v7 < (unsigned int)Ptr_low ? 0x80070216 : 0;
  if ( v7 < (unsigned int)Ptr_low )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xB5u);
  }
  else if ( v6 > HIDWORD(this[13].Ptr) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[11], 8u, 1, &v17);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    *((_QWORD *)this[11].Ptr + Ptr_low) = v17;
    LODWORD(this[14].Ptr) = v6;
  }
  if ( v8 >= 0 )
  {
    CMILCOMBase::InternalAddRef(v17);
    Ptr = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( Ptr )
    {
      if ( LOBYTE(this[24].Ptr) )
      {
        v11 = (struct IUnknown *)((char *)v17 + 56);
        if ( !v17 )
          v11 = 0LL;
        v5 = CHolographicInteropTaskQueue::PostMessageW(Ptr, 6u, v11, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  ReleaseSRWLockExclusive(this + 10);
  return v5;
}
