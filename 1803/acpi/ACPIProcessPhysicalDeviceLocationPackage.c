/*
 * XREFs of ACPIProcessPhysicalDeviceLocationPackage @ 0x1C008B9B8
 * Callers:
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008B638 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     AMLIEvalPkgDataElement @ 0x1C0043638 (AMLIEvalPkgDataElement.c)
 *     AMLIFreeDataBuffs @ 0x1C0043994 (AMLIFreeDataBuffs.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C008B384 (ACPIGetPhysicalDeviceLocationBuffer.c)
 */

__int64 __fastcall ACPIProcessPhysicalDeviceLocationPackage(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v6; // r12
  int v7; // ebx
  _DWORD *v8; // rdx
  unsigned int i; // r14d
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int16 v19; // dx
  NTSTATUS v20; // eax
  __int64 v21; // rax
  unsigned __int16 v22; // dx
  __int64 v23; // rax
  GUID *v25[5]; // [rsp+28h] [rbp-69h] BYREF
  _QWORD v26[5]; // [rsp+50h] [rbp-41h] BYREF
  struct _STRING SourceString; // [rsp+78h] [rbp-19h] BYREF
  UNICODE_STRING StringIn; // [rsp+88h] [rbp-9h] BYREF
  _QWORD v29[6]; // [rsp+98h] [rbp+7h] BYREF
  _DWORD *v30; // [rsp+F8h] [rbp+67h]

  memset(v29, 0, 0x28uLL);
  memset(v26, 0, sizeof(v26));
  memset(v25, 0, sizeof(v25));
  v6 = *(_DWORD **)(a1 + 32);
  v7 = 0;
  v30 = v6;
  if ( !*v6 )
  {
    v7 = -1073741823;
    goto LABEL_85;
  }
  if ( a2 || a3 )
  {
    v7 = AMLIEvalPkgDataElement(a1, 0, v29);
    if ( v7 >= 0 )
    {
      if ( !a2 || (v7 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v29, a2), v7 >= 0) )
      {
        if ( a3 )
        {
          v8 = (_DWORD *)(a3 + 16);
          if ( a2 )
          {
            *(_OWORD *)v8 = *(_OWORD *)a2;
            *(_DWORD *)(a3 + 32) = a2[4];
          }
          else
          {
            v7 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v29, v8);
            if ( v7 < 0 )
              goto LABEL_85;
          }
          if ( *v6 > 1u )
          {
            for ( i = 2; i - 1 < *v6; i += 2 )
            {
              if ( v26[4] )
              {
                AMLIFreeDataBuffs((__int64)v26);
                v26[4] = 0LL;
              }
              if ( v25[4] )
              {
                AMLIFreeDataBuffs((__int64)v25);
                v25[4] = 0LL;
              }
              v7 = AMLIEvalPkgDataElement(a1, i - 1, v26);
              if ( v7 < 0 )
                break;
              if ( WORD1(v26[0]) == 3 && LODWORD(v26[3]) == 16 )
              {
                v10 = (_QWORD *)v26[4];
                v11 = *(_QWORD *)v26[4] - *(_QWORD *)&ACPI_PLD_JOINT_BUFFER_GUID.Data1;
                if ( *(_QWORD *)v26[4] == *(_QWORD *)&ACPI_PLD_JOINT_BUFFER_GUID.Data1 )
                  v11 = *(_QWORD *)(v26[4] + 8LL) - *(_QWORD *)ACPI_PLD_JOINT_BUFFER_GUID.Data4;
                if ( v11 )
                {
                  v12 = *(_QWORD *)v26[4] - *(_QWORD *)&ACPI_PLD_SPATIAL_BUFFER_GUID.Data1;
                  if ( *(_QWORD *)v26[4] == *(_QWORD *)&ACPI_PLD_SPATIAL_BUFFER_GUID.Data1 )
                    v12 = *(_QWORD *)(v26[4] + 8LL) - *(_QWORD *)ACPI_PLD_SPATIAL_BUFFER_GUID.Data4;
                  if ( v12 )
                  {
                    v13 = *(_QWORD *)v26[4] - *(_QWORD *)&ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data1;
                    if ( *(_QWORD *)v26[4] == *(_QWORD *)&ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data1 )
                      v13 = *(_QWORD *)(v26[4] + 8LL) - *(_QWORD *)ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data4;
                    if ( v13 )
                    {
                      v15 = *(_QWORD *)v26[4] - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1;
                      if ( *(_QWORD *)v26[4] == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1 )
                        v15 = *(_QWORD *)(v26[4] + 8LL) - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data4;
                      if ( !v15 )
                        goto LABEL_94;
                      v16 = *(_QWORD *)v26[4] - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1;
                      if ( *(_QWORD *)v26[4] == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1 )
                        v16 = *(_QWORD *)(v26[4] + 8LL)
                            - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data4;
                      if ( !v16 )
                        goto LABEL_94;
                      v17 = *(_QWORD *)v26[4] - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1;
                      if ( *(_QWORD *)v26[4] == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1 )
                        v17 = *(_QWORD *)(v26[4] + 8LL) - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data4;
                      if ( !v17 )
                      {
LABEL_94:
                        if ( !*(_QWORD *)(a3 + 128) )
                        {
                          v7 = AMLIEvalPkgDataElement(a1, i, v25);
                          if ( v7 < 0 )
                            break;
                          if ( WORD1(v25[0]) == 3 )
                          {
                            v18 = *v10 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1;
                            if ( *v10 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1 )
                              v18 = v10[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data4;
                            if ( v18 )
                            {
                              v21 = *v10 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1;
                              if ( *v10 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1 )
                                v21 = v10[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data4;
                              if ( v21 )
                              {
                                v23 = *v10 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1;
                                if ( *v10 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1 )
                                  v23 = v10[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data4;
                                if ( !v23 && LODWORD(v25[3]) >= 0x10 )
                                {
                                  v20 = RtlStringFromGUID(v25[4], (PUNICODE_STRING)(a3 + 120));
LABEL_77:
                                  v7 = v20;
                                  if ( v20 < 0 )
                                    break;
                                }
                              }
                              else if ( LODWORD(v25[3]) >= 0x10 )
                              {
                                v22 = 0;
                                StringIn.Buffer = (wchar_t *)v25[4];
                                StringIn.Length = 0;
                                StringIn.MaximumLength = 16;
                                do
                                {
                                  if ( !*((_WORD *)&v25[4]->Data1 + ((unsigned __int64)v22 >> 1)) )
                                    break;
                                  v22 += 2;
                                  StringIn.Length = v22;
                                }
                                while ( v22 < 0x10u );
                                if ( v22 )
                                {
                                  v20 = RtlDuplicateUnicodeString(1u, &StringIn, (PUNICODE_STRING)(a3 + 120));
                                  goto LABEL_77;
                                }
                              }
                            }
                            else if ( LODWORD(v25[3]) >= 0x10 )
                            {
                              v19 = 0;
                              SourceString.Buffer = (char *)v25[4];
                              SourceString.Length = 0;
                              SourceString.MaximumLength = 16;
                              do
                              {
                                if ( !*((_BYTE *)&v25[4]->Data1 + v19) )
                                  break;
                                SourceString.Length = ++v19;
                              }
                              while ( v19 < 0x10u );
                              v6 = v30;
                              if ( v19 )
                              {
                                v20 = RtlAnsiStringToUnicodeString((PUNICODE_STRING)(a3 + 120), &SourceString, 1u);
                                goto LABEL_77;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v14 = *(_QWORD *)(a3 + 104) - *(_QWORD *)&GUID_NULL.Data1;
                      if ( !v14 )
                        v14 = *(_QWORD *)(a3 + 112) - *(_QWORD *)GUID_NULL.Data4;
                      if ( !v14 )
                      {
                        v7 = AMLIEvalPkgDataElement(a1, i, v25);
                        if ( v7 < 0 )
                          break;
                        if ( WORD1(v25[0]) == 3 && LODWORD(v25[3]) >= 0x10 )
                          *(GUID *)(a3 + 104) = *v25[4];
                      }
                    }
                  }
                  else if ( (*(_BYTE *)(a3 + 52) & 0x1F) == 0 )
                  {
                    v7 = AMLIEvalPkgDataElement(a1, i, v25);
                    if ( v7 < 0 )
                      break;
                    if ( WORD1(v25[0]) == 3 && LODWORD(v25[3]) >= 0x10 )
                      *(GUID *)(a3 + 52) = *v25[4];
                  }
                }
                else if ( (*(_BYTE *)(a3 + 36) & 0x1F) == 0 )
                {
                  v7 = AMLIEvalPkgDataElement(a1, i, v25);
                  if ( v7 < 0 )
                    break;
                  if ( WORD1(v25[0]) == 3 && LODWORD(v25[3]) >= 0x10 )
                    *(GUID *)(a3 + 36) = *v25[4];
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_85:
  if ( v29[4] )
    AMLIFreeDataBuffs((__int64)v29);
  if ( v26[4] )
    AMLIFreeDataBuffs((__int64)v26);
  if ( v25[4] )
    AMLIFreeDataBuffs((__int64)v25);
  return (unsigned int)v7;
}
