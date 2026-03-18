/*
 * XREFs of PnpQueryID @ 0x1405CD96C
 * Callers:
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PnpIrpQueryID @ 0x1405CDA64 (PnpIrpQueryID.c)
 *     PnpFixupID @ 0x1405CDAEC (PnpFixupID.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     PnpLogEvent @ 0x14072767C (PnpLogEvent.c)
 *     PnpSetInvalidIDEvent @ 0x140732AA0 (PnpSetInvalidIDEvent.c)
 */

__int64 __fastcall PnpQueryID(__int64 a1, int a2, PVOID *a3, _DWORD *a4)
{
  int ID; // ebx
  int v9; // r9d
  int v10; // edx
  int v11; // r8d
  int v12; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v17; // [rsp+38h] [rbp-20h]

  *a4 = 0;
  ID = PnpIrpQueryID(*(_QWORD *)(a1 + 32));
  if ( ID < 0 )
  {
LABEL_15:
    if ( ID == -1073479624 || !a2 || a2 == 3 && ID == -1073741670 )
    {
      PipSetDevNodeProblem(a1, 9, ID);
      v14 = *(_QWORD *)(a1 + 16);
      if ( (*(_DWORD *)(v14 + 396) & 0x200000) == 0 )
      {
        PipSetDevNodeFlags(v14, 0x200000LL);
        PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
      }
    }
    if ( ID != -1073479624 && !a2 && ID != -1073741670 )
    {
      v15 = *(_QWORD *)(a1 + 16) + 56LL;
      v16 = 5242958;
      v17 = L"failed IRP_MN_QUERY_ID-BusQueryDeviceID";
      PnpLogEvent(v15, &v16, (unsigned int)ID, 0LL, 0);
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
      v12 = PnpFixupID((unsigned int)*a3, v10, v11, v9, *(_QWORD *)(a1 + 16) + 56LL);
      goto LABEL_9;
    }
    if ( a2 == 3 )
    {
      v9 = 0;
      goto LABEL_7;
    }
  }
  v12 = 0;
LABEL_9:
  *a4 = 2 * v12;
  if ( !(2 * v12) )
    ID = -1073479624;
  if ( ID < 0 )
    goto LABEL_15;
  return (unsigned int)ID;
}
