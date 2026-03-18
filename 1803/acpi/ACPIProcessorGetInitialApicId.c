/*
 * XREFs of ACPIProcessorGetInitialApicId @ 0x1C00817A4
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C0036300 (ACPIProcessorStartDevice.c)
 * Callees:
 *     AMLIGetNSObjectType @ 0x1C0001D20 (AMLIGetNSObjectType.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIProcessorGetInitialApicId(__int64 a1, int *a2)
{
  unsigned int v2; // ebx
  int v4; // r15d
  char v6; // bp
  __int64 v7; // rdx
  PVOID v9; // rdx
  __int64 v10; // rcx
  const char *v11; // rax
  const char *v12; // rdx
  char *v13; // r14
  char v14; // r9
  char *v15; // r11
  char *v16; // r12
  char *v17; // rdx
  unsigned __int8 v18; // cl
  char *v19; // r10
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // ecx
  __int64 v28; // rcx
  unsigned int v29; // r8d
  unsigned int v30; // [rsp+90h] [rbp+8h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  P = 0LL;
  *a2 = -1;
  v4 = *(_DWORD *)(a1 + 196);
  v6 = 1;
  v30 = 0;
  if ( (int)ACPIGet(a1, 0x54414D5Fu, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v30) >= 0 )
  {
    v9 = P;
  }
  else
  {
    v7 = *((_QWORD *)AcpiInformation + 4);
    if ( !v7 )
      return 3221225473LL;
    v9 = (PVOID)(v7 + 44);
    v6 = 0;
    P = v9;
    v30 = *(_DWORD *)(*((_QWORD *)AcpiInformation + 4) + 4LL) - 44;
  }
  if ( !v9 )
    return 3221225473LL;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = byte_1C005B1F0;
  v12 = byte_1C005B1F0;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v11 = *(const char **)(a1 + 560);
    if ( (v10 & 0x400000000000LL) != 0 )
      v12 = *(const char **)(a1 + 568);
  }
  WPP_RECORDER_SF_Dqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0xBu,
    (__int64)&WPP_72dd1c1115013f02fe06a3c7ab98b878_Traceguids,
    v4,
    a1,
    v11,
    v12);
  v13 = (char *)P;
  v14 = 0;
  v15 = (char *)P + v30;
  v16 = (char *)P + 2;
  while ( 1 )
  {
    v17 = v13;
    if ( v16 <= v15 )
    {
      do
      {
        v18 = v17[1];
        if ( v18 < 2u )
          break;
        v19 = &v17[v18];
        if ( v19 > v15 )
          break;
        v20 = *v17;
        if ( *v17 )
        {
          if ( v20 == 9 )
          {
            if ( v18 >= 0x10u
              && ((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 712)) == 6
               && (v26 & *(_QWORD *)(a1 + 8)) != 0
               && *(_DWORD *)(v25 + 12) == v4
               || v6 && v14) )
            {
              goto LABEL_30;
            }
          }
          else if ( v20 == 11
                 && v18 >= 0x28u
                 && ((unsigned int)IrqLibGicVersion < 3 || v18 >= 0x4Cu)
                 && (((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 712)) == 6
                   && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0
                   || (unsigned int)AMLIGetNSObjectType(v28) == 12)
                  && *(_DWORD *)(v25 + 8) == v4
                  || v6 && v14) )
          {
            if ( v29 < 3 )
LABEL_30:
              v24 = *(_DWORD *)(v25 + 4);
            else
              v24 = (*(_QWORD *)(v25 + 68) >> 8) ^ (*(_QWORD *)(v25 + 68) ^ (*(_QWORD *)(v25 + 68) >> 8)) & 0xFFFFFF;
LABEL_31:
            *a2 = v24;
            break;
          }
        }
        else if ( v18 >= 8u
               && (((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 712)) == 12
                 || (unsigned int)AMLIGetNSObjectType(v22) == 6 && (v23 & *(_QWORD *)(a1 + 8)) != 0)
                && *(unsigned __int8 *)(v21 + 2) == v4
                || v6 && v14) )
        {
          v24 = *(unsigned __int8 *)(v21 + 3);
          goto LABEL_31;
        }
        v17 = v19;
      }
      while ( v19 + 2 <= v15 );
    }
    v27 = *a2;
    if ( *a2 != -1 )
      break;
    if ( !v6 )
      goto LABEL_52;
    if ( v14 )
      break;
    v14 = 1;
  }
  if ( v6 )
  {
    ExFreePoolWithTag(v13, 0);
    v27 = *a2;
  }
LABEL_52:
  if ( v27 == -1 )
    return (unsigned int)-1073741823;
  return v2;
}
