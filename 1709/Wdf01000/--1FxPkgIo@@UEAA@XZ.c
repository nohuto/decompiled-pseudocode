/*
 * XREFs of ??1FxPkgIo@@UEAA@XZ @ 0x1C0095548
 * Callers:
 *     ??_EFxPkgIo@@UEAAPEAXI@Z @ 0x1C0095620 (--_EFxPkgIo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0017EC8 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C006574C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall FxPkgIo::~FxPkgIo(FxPkgIo *this, unsigned int a2, unsigned int a3)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rdi
  char *Flink; // rsi
  _LIST_ENTRY *v6; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  this->m_DefaultQueue = 0LL;
  this->m_DeviceBase = 0LL;
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  this->__vftable = (FxPkgIo_vtbl *)FxPkgIo::`vftable';
  while ( p_m_DynamicDispatchInfoListHead->Flink != p_m_DynamicDispatchInfoListHead )
  {
    Flink = (char *)p_m_DynamicDispatchInfoListHead->Flink;
    if ( p_m_DynamicDispatchInfoListHead->Flink->Blink != p_m_DynamicDispatchInfoListHead
      || (v6 = *(_LIST_ENTRY **)Flink, *(char **)(*(_QWORD *)Flink + 8LL) != Flink) )
    {
      __fastfail(3u);
    }
    p_m_DynamicDispatchInfoListHead->Flink = v6;
    v6->Blink = p_m_DynamicDispatchInfoListHead;
    *((_QWORD *)Flink + 1) = Flink;
    *(_QWORD *)Flink = Flink;
    `vector destructor iterator'(Flink + 16, 0x10uLL, 4uLL, (void (__fastcall *)(void *))FxDeviceBase::AddChildList);
    FxPoolFree(Flink);
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0xBu, WPP_FxPkgIo_cpp_Traceguids, this);
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
