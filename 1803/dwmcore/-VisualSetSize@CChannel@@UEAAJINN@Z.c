/*
 * XREFs of ?VisualSetSize@CChannel@@UEAAJINN@Z @ 0x180086720
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetSize(CChannel *this, int a2, double a3, double a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned int v7; // ebx
  _DWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v10[3]; // [rsp+28h] [rbp-40h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v9[0] = 406;
  *(double *)v10 = a3;
  *(double *)&v10[1] = a4;
  v9[1] = a2;
  v7 = CChannel::SendCommand(this, v9, 0x18u);
  if ( v4 )
    LeaveCriticalSection(v4);
  return v7;
}
