/*
 * XREFs of ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@_NPEA_N@Z @ 0x1C00163A0
 * Callers:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0017430 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C00197D4 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C0140948 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetTransformParent(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CVisualMarshaler *a3,
        char a4,
        bool *a5)
{
  int WeakReferenceBase; // ebp
  __int64 v7; // rdx
  struct DirectComposition::CVisualMarshaler *v10; // rax
  bool *v11; // r15
  struct DirectComposition::CWeakReferenceBase *v13; // rdi
  struct DirectComposition::CWeakReferenceBase *v14; // rdx
  char v15; // cl
  char v16; // cl
  struct DirectComposition::CWeakReferenceBase *v17; // [rsp+40h] [rbp+8h] BYREF

  WeakReferenceBase = 0;
  v7 = *((_QWORD *)this + 14);
  if ( v7 )
    v10 = *(struct DirectComposition::CVisualMarshaler **)(v7 + 16);
  else
    v10 = 0LL;
  v11 = a5;
  if ( a3 == v10 )
  {
    if ( v7 && !v10 )
    {
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        (struct DirectComposition::CWeakReferenceBase *)v7);
      *((_QWORD *)this + 14) = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
    v17 = 0LL;
    if ( a3 )
    {
      WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, a3, &v17);
      if ( WeakReferenceBase < 0 )
        goto LABEL_5;
      v13 = v17;
    }
    v14 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 14);
    if ( v14 )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v14);
    v15 = (a4 << 7) | *((_BYTE *)this + 232) & 0x7F;
    *((_QWORD *)this + 14) = v13;
    *((_DWORD *)this + 4) |= 0x200u;
    *((_BYTE *)this + 232) = v15;
    *v11 = 1;
  }
LABEL_5:
  if ( *((_BYTE *)this + 232) >> 7 != a4 && *((_QWORD *)this + 14) )
  {
    v16 = (a4 << 7) | *((_BYTE *)this + 232) & 0x7F;
    *((_DWORD *)this + 4) |= 0x200u;
    *((_BYTE *)this + 232) = v16;
    *v11 = 1;
  }
  return (unsigned int)WeakReferenceBase;
}
