/*
 * XREFs of sub_180081F44 @ 0x180081F44
 * Callers:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 * Callees:
 *     RtlGetThreadErrorMode @ 0x180081FF0 (RtlGetThreadErrorMode.c)
 *     EtwEventWriteNoRegistration @ 0x180088240 (EtwEventWriteNoRegistration.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 */

void __fastcall sub_180081F44(unsigned __int16 *a1, unsigned __int16 *a2, int a3, const EVENT_DESCRIPTOR *a4, char a5)
{
  NTSTATUS v8; // eax
  int v9; // ecx
  int v10; // eax
  ULONG v11; // r8d
  int v12; // eax
  int ProcessInformation; // [rsp+30h] [rbp-50h] BYREF
  int *v14; // [rsp+38h] [rbp-48h] BYREF
  int v15; // [rsp+40h] [rbp-40h]
  int v16; // [rsp+44h] [rbp-3Ch]
  __int64 v17; // [rsp+48h] [rbp-38h]
  int v18; // [rsp+50h] [rbp-30h]
  int v19; // [rsp+54h] [rbp-2Ch]
  __int64 v20; // [rsp+58h] [rbp-28h]
  int v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+64h] [rbp-1Ch]
  int v23; // [rsp+B0h] [rbp+30h] BYREF

  v23 = a3;
  ProcessInformation = 0;
  if ( (dword_180158674 & 0x20) != 0 )
  {
    if ( a5 )
      goto LABEL_8;
    if ( (RtlGetThreadErrorMode() & 0x10) == 0 )
    {
      v8 = ZwQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessDefaultHardErrorMode,
             &ProcessInformation,
             4u,
             0LL);
      v9 = ProcessInformation;
      if ( v8 < 0 )
        v9 = 5;
      ProcessInformation = v9;
      if ( (v9 & 5) != 0 )
      {
LABEL_8:
        v16 = 0;
        v19 = 0;
        v14 = &v23;
        v17 = *((_QWORD *)a1 + 1);
        v10 = *a1 + 2;
        v15 = 4;
        v18 = v10;
        if ( a2 )
        {
          v11 = 3;
          v20 = *((_QWORD *)a2 + 1);
          v12 = *a2 + 2;
          v22 = 0;
          v21 = v12;
        }
        else
        {
          v11 = 2;
        }
        EtwEventWriteNoRegistration(&stru_180113E90, a4, v11, (PEVENT_DATA_DESCRIPTOR)&v14);
      }
    }
  }
}
