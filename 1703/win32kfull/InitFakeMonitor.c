/*
 * XREFs of InitFakeMonitor @ 0x1C01A7420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitFakeMonitor(__int64 a1)
{
  __int64 v1; // r8
  _DWORD *v2; // r9
  __int64 v3; // rdx
  _DWORD *v4; // r8
  __int64 v5; // rdx
  _DWORD *v6; // r8
  __int64 result; // rax
  __int128 v8; // xmm0

  v1 = *(_QWORD *)(a1 + 288);
  v2 = (_DWORD *)*gpDispInfo;
  *(_DWORD *)(*(_QWORD *)(v1 + 40) + 44LL) = *(_DWORD *)(*gpDispInfo + 40LL);
  *(_DWORD *)(*(_QWORD *)(v1 + 40) + 48LL) = v2[11];
  *(_DWORD *)(*(_QWORD *)(v1 + 40) + 52LL) = v2[12];
  *(_DWORD *)(*(_QWORD *)(v1 + 40) + 56LL) = v2[13];
  v3 = *(_QWORD *)(a1 + 288);
  v4 = (_DWORD *)*gpDispInfo;
  *(_DWORD *)(*(_QWORD *)(v3 + 40) + 60LL) = *(_DWORD *)(*gpDispInfo + 56LL);
  *(_DWORD *)(*(_QWORD *)(v3 + 40) + 64LL) = v4[15];
  *(_DWORD *)(*(_QWORD *)(v3 + 40) + 68LL) = v4[16];
  *(_DWORD *)(*(_QWORD *)(v3 + 40) + 72LL) = v4[17];
  v5 = *(_QWORD *)(a1 + 288);
  v6 = (_DWORD *)*gpDispInfo;
  *(_DWORD *)(*(_QWORD *)(v5 + 40) + 28LL) = *(_DWORD *)(*gpDispInfo + 24LL);
  *(_DWORD *)(*(_QWORD *)(v5 + 40) + 32LL) = v6[7];
  *(_DWORD *)(*(_QWORD *)(v5 + 40) + 36LL) = v6[8];
  *(_DWORD *)(*(_QWORD *)(v5 + 40) + 40LL) = v6[9];
  result = *(_QWORD *)(a1 + 288);
  v8 = *(_OWORD *)(*(_QWORD *)(result + 40) + 28LL);
  *(_DWORD *)(a1 + 700) = 1;
  *(_OWORD *)(a1 + 124) = v8;
  return result;
}
