/*
 * XREFs of ?CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z @ 0x180022F7C
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180008C54 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

__int64 __fastcall CStreamClassPolicyManager::CreateInstance(struct CStreamClassPolicyManager **a1)
{
  unsigned int v2; // ebx
  HANDLE ProcessHeap; // rax
  _QWORD *v4; // rax

  v2 = 0;
  ProcessHeap = GetProcessHeap();
  v4 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  if ( v4 )
  {
    v4[1] = 0LL;
    *v4 = &CStreamClassPolicyManager::`vftable'{for `CRefCountedObject'};
    v4[2] = &CStreamClassPolicyManager::`vftable'{for `IStreamClassPolicyManager'};
    *((_DWORD *)v4 + 2) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    *a1 = (struct CStreamClassPolicyManager *)v4;
  }
  else
  {
    v2 = -2147024882;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_b0c2236d62e53008d04ecf7808c6a7c0_Traceguids, -2147024882);
    }
    AudPolicyLogError("CStreamClassPolicyManager::CreateInstance", 59, -2147024882);
  }
  return v2;
}
