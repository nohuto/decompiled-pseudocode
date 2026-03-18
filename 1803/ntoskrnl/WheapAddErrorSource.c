/*
 * XREFs of WheapAddErrorSource @ 0x140182110
 * Callers:
 *     WheaAddErrorSource @ 0x1407CA8D0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x1408C0DD8 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_1403D17E0, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 117) = dword_1403D17CC;
  v3 = (__int64 *)qword_1403D17D8;
  if ( *(__int64 **)qword_1403D17D8 != &qword_1403D17D0 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_1403D17D0;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_1403D17D8 = a2;
  _InterlockedIncrement(&dword_1403D17CC);
  return KeSetEvent(&stru_1403D17E0, 0, 0);
}
