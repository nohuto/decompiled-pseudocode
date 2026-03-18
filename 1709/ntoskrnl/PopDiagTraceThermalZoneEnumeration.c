/*
 * XREFs of PopDiagTraceThermalZoneEnumeration @ 0x140247248
 * Callers:
 *     PopThermalWorker @ 0x140700090 (PopThermalWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400B05BC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopSqmThermalZoneEnumeration @ 0x14070CE7C (PopSqmThermalZoneEnumeration.c)
 */

void __fastcall PopDiagTraceThermalZoneEnumeration(char *a1, unsigned __int16 *a2, __int64 a3)
{
  char *DeviceAttachmentBaseRefWithTag; // rax
  char *v5; // rdi
  char *v6; // r13
  unsigned __int16 v7; // r12
  unsigned int v8; // kr0C_4
  unsigned int v9; // esi
  unsigned int v10; // kr00_4
  unsigned int v11; // r14d
  unsigned int v12; // kr04_4
  unsigned int v13; // r15d
  unsigned int v14; // kr08_4
  unsigned int *v15; // rcx
  _BYTE *v16; // r9
  unsigned int v17; // r8d
  __int64 v18; // r11
  __int64 v19; // rax
  unsigned __int16 *v20; // r12
  __int64 v21; // rax
  ULONG v22; // edx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned __int16 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v32; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v33; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v34; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v35; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v36; // [rsp+74h] [rbp-8Ch]
  unsigned __int16 *v37; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+98h] [rbp-68h]
  int v41; // [rsp+9Ch] [rbp-64h]
  unsigned int *v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  _DWORD *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  _DWORD *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  _DWORD *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  _BYTE v50[40]; // [rsp+200h] [rbp+100h] BYREF

  v37 = a2;
  if ( PopDiagHandleRegistered )
  {
    DeviceAttachmentBaseRefWithTag = (char *)IoGetDeviceAttachmentBaseRefWithTag(a3, 0x746C6644u);
    v5 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      DeviceAttachmentBaseRefWithTag = *(char **)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    if ( DeviceAttachmentBaseRefWithTag )
    {
      v6 = DeviceAttachmentBaseRefWithTag + 280;
      v7 = *((_WORD *)DeviceAttachmentBaseRefWithTag + 140) >> 1;
      v8 = *((_DWORD *)a1 + 5);
      v31 = v7;
      v9 = v8 / 0xA;
      v10 = *((_DWORD *)a1 + 7);
      v33 = v8 / 0xA;
      v11 = v10 / 0xA;
      v12 = *((_DWORD *)a1 + 19);
      v34 = v10 / 0xA;
      v13 = v12 / 0xA;
      v14 = *((_DWORD *)a1 + 6);
      v35 = v12 / 0xA;
      v36 = v14 / 0xA;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED) )
      {
        *(_QWORD *)&UserData.Size = 2LL;
        UserData.Ptr = (ULONGLONG)&v31;
        v15 = (unsigned int *)v50;
        v16 = v50;
        v39 = *((_QWORD *)v6 + 1);
        v17 = 6;
        v41 = 0;
        v40 = 2 * v7;
        v18 = 10LL;
        v43 = 4LL;
        v42 = &v33;
        v44 = a1 + 4;
        v46 = a1 + 8;
        v48 = a1 + 12;
        v45 = 4LL;
        v47 = 4LL;
        v49 = 4LL;
        do
        {
          v19 = v17++;
          v19 *= 2LL;
          *v15 = *(unsigned int *)((char *)v15 + a1 - v50 + 36) / 0xA;
          ++v15;
          *(&UserData.Ptr + v19) = (ULONGLONG)v16;
          v16 += 4;
          *((_QWORD *)&UserData.Size + v19) = 4LL;
          --v18;
        }
        while ( v18 );
        v20 = v37;
        v21 = 2LL * v17;
        v22 = *v37;
        *(&UserData.Ptr + v21) = (ULONGLONG)&v34;
        *((_QWORD *)&UserData.Size + v21) = 4LL;
        v23 = 2LL * (v17 + 1);
        *(&UserData.Ptr + v23) = (ULONGLONG)&v35;
        *((_QWORD *)&UserData.Size + v23) = 4LL;
        v24 = 2LL * (v17 + 2);
        *(&UserData.Ptr + v24) = (ULONGLONG)(a1 + 80);
        *((_QWORD *)&UserData.Size + v24) = 4LL;
        v25 = 2LL * (v17 + 3);
        *(&UserData.Ptr + v25) = (ULONGLONG)(a1 + 24);
        *((_QWORD *)&UserData.Size + v25) = 4LL;
        v26 = 2LL * (v17 + 4);
        *(&UserData.Ptr + v26) = (ULONGLONG)(a1 + 84);
        *((_QWORD *)&UserData.Size + v26) = 4LL;
        v32 = (unsigned __int16)v22 >> 1;
        v27 = v17 + 5;
        v28 = v17 + 6;
        v27 *= 2LL;
        *(&UserData.Ptr + v27) = (ULONGLONG)&v32;
        *((_QWORD *)&UserData.Size + v27) = 2LL;
        v29 = 2LL * v28;
        *(&UserData.Ptr + v29) = *((_QWORD *)v20 + 1);
        *(&UserData.Size + 2 * v29) = v22;
        *(&UserData.Reserved + 2 * v29) = 0;
        v30 = 2LL * (v28 + 1);
        *(&UserData.Ptr + v30) = (ULONGLONG)(a1 + 88);
        *((_QWORD *)&UserData.Size + v30) = 4LL;
        EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED, 0LL, 0, 0LL, 0LL, 0x18u, &UserData);
        v9 = v33;
        v11 = v34;
        v13 = v35;
      }
      else
      {
        LODWORD(v20) = (_DWORD)v37;
      }
      PopSqmThermalZoneEnumeration(
        (_DWORD)v6,
        (_DWORD)v20,
        v9,
        *((_DWORD *)a1 + 1),
        *((_DWORD *)a1 + 2),
        *((_DWORD *)a1 + 3),
        *((_DWORD *)a1 + 9) / 0xAu,
        *((_DWORD *)a1 + 10) / 0xAu,
        v11,
        v13,
        v36,
        *((_DWORD *)a1 + 22));
    }
    if ( v5 )
      ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  }
}
