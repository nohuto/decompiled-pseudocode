/*
 * XREFs of PnpQueryID @ 0x14051A1B0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpFixupID @ 0x140519CC0 (PnpFixupID.c)
 *     PnpIrpQueryID @ 0x14051AD78 (PnpIrpQueryID.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PipSetDevNodeProblem @ 0x14055DCFC (PipSetDevNodeProblem.c)
 *     PnpLogEvent @ 0x1406C1888 (PnpLogEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1406CB198 (PnpSetInvalidIDEvent.c)
 */

__int64 __fastcall PnpQueryID(__int64 a1, int a2, PVOID *a3, _DWORD *a4)
{
  int ID; // ebx
  unsigned int v9; // r9d
  unsigned int v10; // edx
  int v11; // r8d
  bool v12; // zf
  __int64 v14; // rcx
  int v15; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v16; // [rsp+38h] [rbp-20h]

  *a4 = 0;
  ID = PnpIrpQueryID(*(_QWORD *)(a1 + 32));
  if ( ID < 0 )
  {
LABEL_15:
    if ( ID == -1073479624 || !a2 || a2 == 3 && ID == -1073741670 )
    {
      PipSetDevNodeProblem(a1, 9LL, (unsigned int)ID);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 396LL) & 0x200000) == 0 )
      {
        PipSetDevNodeFlags();
        PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
      }
    }
    if ( ID != -1073479624 && !a2 && ID != -1073741670 )
    {
      v14 = *(_QWORD *)(a1 + 16) + 56LL;
      v15 = 5242958;
      v16 = L"failed IRP_MN_QUERY_ID-BusQueryDeviceID";
      PnpLogEvent(v14, &v15, (unsigned int)ID, 0LL, 0);
    }
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
      *a4 = 0;
    }
    return (unsigned int)ID;
  }
  if ( !a2 )
  {
    v9 = 1;
LABEL_7:
    v11 = 0;
    v10 = 200;
    goto LABEL_8;
  }
  if ( a2 > 0 )
  {
    if ( a2 <= 2 )
    {
      v9 = -1;
      v10 = 1024;
      v11 = 1;
LABEL_8:
      *a4 = PnpFixupID((int *)*a3, v10, v11, v9, *(_QWORD *)(a1 + 16) + 56LL);
      goto LABEL_9;
    }
    if ( a2 == 3 )
    {
      v9 = 0;
      goto LABEL_7;
    }
  }
  *a4 = 0;
LABEL_9:
  v12 = 2 * *a4 == 0;
  *a4 *= 2;
  if ( v12 )
    ID = -1073479624;
  if ( ID < 0 )
    goto LABEL_15;
  return (unsigned int)ID;
}
