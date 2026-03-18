/*
 * XREFs of ?VisualSetTouchTargetRect@CChannel@@UEAAJIAEBUtagRECT@@@Z @ 0x180086610
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetTouchTargetRect(CChannel *this, int a2, const struct tagRECT *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  __int128 v7; // xmm0
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+28h] [rbp-20h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v7 = (__int128)*a3;
  v10[0] = 408;
  v10[1] = a2;
  v11 = v7;
  v8 = CChannel::SendCommand(this, v10, 0x18u);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v8;
}
