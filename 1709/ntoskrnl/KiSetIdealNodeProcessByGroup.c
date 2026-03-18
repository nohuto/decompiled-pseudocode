/*
 * XREFs of KiSetIdealNodeProcessByGroup @ 0x140019778
 * Callers:
 *     KeSetAffinityProcess @ 0x1401580FC (KeSetAffinityProcess.c)
 *     KiExtendProcessAffinity @ 0x14020D0D0 (KiExtendProcessAffinity.c)
 *     KeInitializeProcess @ 0x14048C5AC (KeInitializeProcess.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x140019804 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x140128DE0 (KeSelectNodeForAffinity.c)
 */

__int64 __fastcall KiSetIdealNodeProcessByGroup(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r9
  __int64 v6; // rbx
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  v4 = a2;
  v8[1] = a3;
  v6 = *(_QWORD *)(a1 + 8LL * a3 + 88);
  v8[0] = v6;
  if ( !a2 )
    v4 = KeSelectNodeForAffinity(v8);
  *(_WORD *)(a1 + 2 * v3 + 528) = *(_WORD *)(v4 + 146);
  v8[0] = *(_QWORD *)(v4 + 136) & v6;
  result = KeSelectIdealProcessor(v4, v8, 0LL);
  *(_DWORD *)(a1 + 4 * v3 + 448) = result;
  return result;
}
