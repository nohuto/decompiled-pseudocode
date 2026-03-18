/*
 * XREFs of ?PartitionUpdateCursorMouseMove@CChannel@@UEAAJXZ @ 0x180086BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionUpdateCursorMouseMove(CChannel *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  unsigned int v3; // ebx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v5 = 299;
  v3 = CChannel::SendCommand(this, &v5, 4u);
  if ( v1 )
    LeaveCriticalSection(v1);
  return v3;
}
