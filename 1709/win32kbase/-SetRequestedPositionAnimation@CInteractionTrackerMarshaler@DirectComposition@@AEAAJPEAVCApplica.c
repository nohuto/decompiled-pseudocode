/*
 * XREFs of ?SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C0146640
 * Callers:
 *     ?SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0146370 (-SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C002ED4C (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C013FE48 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetRequestedPositionAnimation(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CBaseExpressionMarshaler *a3,
        bool *a4)
{
  int WeakReferenceBase; // esi
  __int64 v6; // rdx
  struct DirectComposition::CBaseExpressionMarshaler *v9; // rcx
  struct DirectComposition::CWeakReferenceBase *v10; // rdi
  struct DirectComposition::CWeakReferenceBase *v11; // rdx
  struct DirectComposition::CWeakReferenceBase *v13; // [rsp+40h] [rbp+8h] BYREF

  WeakReferenceBase = 0;
  v6 = *((_QWORD *)this + 23);
  if ( v6 )
    v9 = *(struct DirectComposition::CBaseExpressionMarshaler **)(v6 + 16);
  else
    v9 = 0LL;
  if ( a3 == v9 )
  {
    if ( v6 && !a3 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        (struct DirectComposition::CWeakReferenceBase *)v6,
        0LL);
      *((_QWORD *)this + 23) = 0LL;
    }
  }
  else
  {
    v10 = 0LL;
    v13 = 0LL;
    if ( a3 )
    {
      WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, a3, &v13);
      if ( WeakReferenceBase < 0 )
        return (unsigned int)WeakReferenceBase;
      v10 = v13;
    }
    v11 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 23);
    if ( v11 )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v11, (__int64)a3);
    *((_DWORD *)this + 4) &= ~0x400u;
    *((_QWORD *)this + 23) = v10;
    *a4 = 1;
  }
  return (unsigned int)WeakReferenceBase;
}
