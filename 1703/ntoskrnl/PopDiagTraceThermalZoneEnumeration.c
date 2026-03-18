/*
 * XREFs of PopDiagTraceThermalZoneEnumeration @ 0x1401689E4
 * Callers:
 *     PopThermalWorker @ 0x1405D7C20 (PopThermalWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopSqmThermalZoneEnumeration @ 0x1406D6C00 (PopSqmThermalZoneEnumeration.c)
 */

void __fastcall PopDiagTraceThermalZoneEnumeration(char *a1, unsigned __int16 *a2, __int64 a3)
{
  char *DeviceAttachmentBaseRefWithTag; // rax
  char *v5; // rdi
  char *v6; // r13
  unsigned __int16 v7; // r12
  unsigned int v8; // kr00_4
  unsigned int v9; // esi
  unsigned int v10; // kr04_4
  unsigned int v11; // r14d
  unsigned int v12; // kr08_4
  unsigned int v13; // r15d
  unsigned int v14; // kr0C_4
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
  ULONGLONG v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  REGHANDLE v32; // rcx
  unsigned __int16 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v34; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v35; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v36; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v37; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v38; // [rsp+74h] [rbp-8Ch]
  unsigned __int16 *v39; // [rsp+78h] [rbp-88h]
  REGHANDLE RegHandle; // [rsp+80h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-60h]
  int v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+ACh] [rbp-54h]
  unsigned int *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  _DWORD *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  _DWORD *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  _DWORD *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  _BYTE v53[40]; // [rsp+210h] [rbp+110h] BYREF

  v39 = a2;
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
      v33 = v7;
      v9 = v8 / 0xA;
      v10 = *((_DWORD *)a1 + 7);
      v35 = v8 / 0xA;
      v11 = v10 / 0xA;
      v12 = *((_DWORD *)a1 + 19);
      v36 = v10 / 0xA;
      v13 = v12 / 0xA;
      v14 = *((_DWORD *)a1 + 6);
      v37 = v12 / 0xA;
      v38 = v14 / 0xA;
      RegHandle = PopDiagHandle;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED) )
      {
        *(_QWORD *)&UserData.Size = 2LL;
        UserData.Ptr = (ULONGLONG)&v33;
        v15 = (unsigned int *)v53;
        v16 = v53;
        v42 = *((_QWORD *)v6 + 1);
        v17 = 6;
        v44 = 0;
        v43 = 2 * v7;
        v18 = 10LL;
        v46 = 4LL;
        v45 = &v35;
        v47 = a1 + 4;
        v49 = a1 + 8;
        v51 = a1 + 12;
        v48 = 4LL;
        v50 = 4LL;
        v52 = 4LL;
        do
        {
          v19 = v17++;
          v19 *= 2LL;
          *v15 = *(unsigned int *)((char *)v15 + a1 - v53 + 36) / 0xA;
          ++v15;
          *(&UserData.Ptr + v19) = (ULONGLONG)v16;
          v16 += 4;
          *((_QWORD *)&UserData.Size + v19) = 4LL;
          --v18;
        }
        while ( v18 );
        v20 = v39;
        v21 = 2LL * v17;
        v22 = *v39;
        *(&UserData.Ptr + v21) = (ULONGLONG)&v36;
        *((_QWORD *)&UserData.Size + v21) = 4LL;
        v23 = 2LL * (v17 + 1);
        *(&UserData.Ptr + v23) = (ULONGLONG)&v37;
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
        v34 = (unsigned __int16)v22 >> 1;
        v27 = v17 + 5;
        v28 = v17 + 6;
        v27 *= 2LL;
        *(&UserData.Ptr + v27) = (ULONGLONG)&v34;
        *((_QWORD *)&UserData.Size + v27) = 2LL;
        v29 = *((_QWORD *)v20 + 1);
        v30 = 2LL * v28;
        *(&UserData.Size + 2 * v30) = v22;
        *(&UserData.Ptr + v30) = v29;
        v31 = 2LL * (v28 + 1);
        *(&UserData.Reserved + 2 * v30) = 0;
        v32 = RegHandle;
        *(&UserData.Ptr + v31) = (ULONGLONG)(a1 + 88);
        *((_QWORD *)&UserData.Size + v31) = 4LL;
        EtwWriteEx(v32, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED, 0LL, 0, 0LL, 0LL, 0x18u, &UserData);
        v9 = v35;
        v11 = v36;
        v13 = v37;
      }
      else
      {
        LODWORD(v20) = (_DWORD)v39;
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
        v38,
        *((_DWORD *)a1 + 22));
    }
    if ( v5 )
      ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  }
}
