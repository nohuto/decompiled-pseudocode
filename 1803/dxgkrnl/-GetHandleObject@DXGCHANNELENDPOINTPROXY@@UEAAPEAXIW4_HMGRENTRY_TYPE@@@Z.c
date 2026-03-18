/*
 * XREFs of ?GetHandleObject@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C01E4EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::GetHandleObject(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // ecx

  if ( *(struct _KTHREAD **)(a1 + 80) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 56)
    && (v8 = *(_QWORD *)(a1 + 40),
        v9 = *(_DWORD *)(v8 + 16 * v7 + 8),
        ((a2 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16 * v7 + 8) & 0x60))
    && (v9 & 0x2000) == 0
    && (v9 & 0x1F) != 0
    && a3 == (*(_DWORD *)(v8 + 16 * v7 + 8) & 0x1F) )
  {
    return *(_QWORD *)(v8 + 16LL * (unsigned int)v7);
  }
  else
  {
    return 0LL;
  }
}
