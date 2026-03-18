/*
 * XREFs of ACPIProcessorGetInitialApicId @ 0x1C0091C64
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C0022DD0 (ACPIProcessorStartDevice.c)
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x1C0005210 (AMLIGetNSObjectType.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIProcessorGetInitialApicId(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  int v4; // r14d
  char v6; // bp
  __int64 v7; // rdx
  PVOID v8; // rdx
  __int64 v9; // rcx
  const char *v10; // rax
  const char *v11; // rdx
  char *v12; // r11
  char v13; // r8
  unsigned int v14; // r15d
  char *v15; // r10
  char *v16; // r12
  char *v17; // rdx
  unsigned __int8 v18; // cl
  char *v19; // r9
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // [rsp+90h] [rbp+8h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  P = 0LL;
  *a2 = -1;
  v4 = *(_DWORD *)(a1 + 196);
  v6 = 1;
  v27 = 0;
  if ( (int)ACPIGet((__int64 *)a1, 1413565791, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v27) >= 0 )
  {
    v8 = P;
  }
  else
  {
    v7 = *((_QWORD *)AcpiInformation + 4);
    if ( !v7 )
      return 3221225473LL;
    v8 = (PVOID)(v7 + 44);
    v6 = 0;
    P = v8;
    v27 = *(_DWORD *)(*((_QWORD *)AcpiInformation + 4) + 4LL) - 44;
  }
  if ( !v8 )
    return 3221225473LL;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = byte_1C0066CD0;
  v11 = byte_1C0066CD0;
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v10 = *(const char **)(a1 + 560);
    if ( (v9 & 0x400000000000LL) != 0 )
      v11 = *(const char **)(a1 + 568);
  }
  WPP_RECORDER_SF_Dqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0xBu,
    (__int64)&WPP_69b4a5494da73df60ed55ee92cf4d44d_Traceguids,
    v4,
    a1,
    v10,
    v11);
  v12 = (char *)P;
  v13 = 0;
  v14 = IrqLibGicVersion;
  v15 = (char *)P + v27;
  v16 = (char *)P + 2;
  while ( 1 )
  {
    v17 = v12;
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
        if ( *v17 || v18 < 8u )
        {
          if ( v20 == 9 && v18 >= 0x10u )
          {
            if ( (unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 712)) == 6
              && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0
              && *(_DWORD *)(v25 + 12) == v4
              || v6 && v13 )
            {
              goto LABEL_41;
            }
          }
          else if ( v20 == 11
                 && v18 >= 0x28u
                 && (v14 < 3 || v18 >= 0x4Cu)
                 && (((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 712)) == 6
                   && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0
                   || (unsigned int)AMLIGetNSObjectType(v26) == 12)
                  && *(_DWORD *)(v25 + 8) == v4
                  || v6 && v13) )
          {
            if ( v14 < 3 )
LABEL_41:
              v23 = *(_DWORD *)(v25 + 4);
            else
              v23 = (*(_QWORD *)(v25 + 68) >> 8) & 0xFF000000 | *(_DWORD *)(v25 + 68) & 0xFFFFFF;
LABEL_20:
            *a2 = v23;
            break;
          }
        }
        else if ( ((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 712)) == 12
                || (unsigned int)AMLIGetNSObjectType(v22) == 6 && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0)
               && *(unsigned __int8 *)(v21 + 2) == v4
               || v6 && v13 )
        {
          v23 = *(unsigned __int8 *)(v21 + 3);
          goto LABEL_20;
        }
        v17 = v19;
      }
      while ( v19 + 2 <= v15 );
    }
    if ( *a2 != -1 )
      break;
    if ( !v6 )
      goto LABEL_24;
    if ( v13 )
      break;
    v13 = 1;
  }
  if ( v6 )
    ExFreePoolWithTag(v12, 0);
LABEL_24:
  if ( *a2 == -1 )
    return (unsigned int)-1073741823;
  return v2;
}
