/*
 * XREFs of ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1C00A1EEC
 * Callers:
 *     imp_WdfInterruptEnable @ 0x1C0097BD0 (imp_WdfInterruptEnable.c)
 * Callees:
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C0035750 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C00689B0 (WPP_IFR_SF_qqq.c)
 */

__int64 __fastcall FxInterrupt::ForceReconnect(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // r8
  unsigned int Flags; // ebx
  const void *v4; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *v6; // r8
  bool v7; // zf
  struct _KINTERRUPT *m_Interrupt; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_DeviceBase = this->m_DeviceBase;
  Flags = m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags;
  v4 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( !this->m_ObjectSize )
    v4 = 0LL;
  v6 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  v7 = m_ObjectSize == 0;
  m_Interrupt = this->m_Interrupt;
  m_Globals = this->m_Globals;
  if ( v7 )
    v6 = 0LL;
  WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x1Bu, WPP_InterruptObject_cpp_Traceguids, v6, v4, m_Interrupt);
  this->m_ForceDisconnected = 0;
  return FxInterrupt::Connect(this, (Flags & 0x2000) == 0);
}
