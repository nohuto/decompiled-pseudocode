/*
 * XREFs of PopCheckThermalPolicy @ 0x1405D80C8
 * Callers:
 *     PopThermalWorker @ 0x1405D7C20 (PopThermalWorker.c)
 * Callees:
 *     PopPrintEx @ 0x14006850C (PopPrintEx.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140071FD0 (IoGetDeviceAttachmentBaseRef.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 */

char __fastcall PopCheckThermalPolicy(__int64 a1, __int64 a2, _BYTE *a3, int *a4)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v9; // rdi
  PVOID DeviceNode; // rcx
  const wchar_t *v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned __int8 v16; // dl
  __int64 i; // rcx
  unsigned __int64 v18; // rax
  unsigned int v19; // r8d
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // edx
  int v23; // r10d
  int v24; // r9d
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // ecx
  bool v29; // cf

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(a1 + 48));
  v9 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
    DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  if ( DeviceNode )
    v11 = (const wchar_t *)*((_QWORD *)DeviceNode + 36);
  else
    v11 = (const wchar_t *)&cchOriginalDestLength;
  *(_DWORD *)(a1 + 232) = 1000000 * *(_DWORD *)(a1 + 200);
  v12 = *(_DWORD *)(a1 + 140);
  if ( v12 && (v13 = *(_DWORD *)(a1 + 128), v13 >= v12) )
  {
    PopPrintEx(
      0,
      (__int64)"Thermal Zone %S (%p): Above critical temperature (_TMP %d, _CRT %d). Shutdown initiated\n",
      v11,
      (const void *)a1,
      v13,
      *(_DWORD *)(a1 + 140));
    *(_BYTE *)(a1 + 210) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 210) = 0;
  }
  v14 = *(_DWORD *)(a1 + 188);
  *(_BYTE *)(a1 + 209) = v14 && *(_DWORD *)(a1 + 128) >= v14;
  v15 = *(_DWORD *)(a1 + 136);
  if ( v15 )
  {
    if ( *(_DWORD *)(a1 + 128) < v15 )
    {
      if ( *(_BYTE *)(a1 + 211) )
        *(_BYTE *)(a1 + 211) = 0;
    }
    else if ( !*(_BYTE *)(a1 + 211) )
    {
      *(_BYTE *)(a1 + 211) = 1;
    }
  }
  v16 = *(_BYTE *)(a1 + 144);
  for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(a1 + 128) >= *(_DWORD *)(a1 + 4 * i + 148) )
      break;
  }
  v18 = *(unsigned int *)(a1 + 104);
  *(_DWORD *)(a1 + 220) = i;
  if ( a2 - *(_QWORD *)(a1 + 96) < v18 )
  {
    *a4 = 0;
    LOBYTE(v20) = *(_BYTE *)(a1 + 65) & 1;
    *a3 = v20;
  }
  else
  {
    v19 = *(_DWORD *)(a1 + 128);
    if ( *(_DWORD *)(a1 + 80) != 100 || (v20 = *(_DWORD *)(a1 + 132)) != 0 && v19 >= v20 )
    {
      if ( (*(_BYTE *)(a1 + 65) & 1) == 0 )
      {
        v21 = 10000 * *(_DWORD *)(a1 + 124);
        *(_QWORD *)(a1 + 96) = 0LL;
        *(_DWORD *)(a1 + 104) = v21;
        *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 132);
      }
      v22 = v19 - *(_DWORD *)(a1 + 108);
      v23 = *(_DWORD *)(a1 + 76);
      v24 = v22 * *(_DWORD *)(a1 + 116) + *(_DWORD *)(a1 + 120) * (v19 - *(_DWORD *)(a1 + 132));
      *a4 = v24;
      if ( !v22 || ((v22 ^ v24) & 0x80000000) == 0 )
        v23 -= v24;
      *(_DWORD *)(a1 + 108) = v19;
      *(_QWORD *)(a1 + 96) = a2;
      *a3 = 1;
      if ( v23 > 1000 )
        v23 = 1000;
      *(_DWORD *)(a1 + 212) = 1;
      v25 = *(_DWORD *)(a1 + 192);
      v26 = 0;
      if ( v23 >= 0 )
        v26 = v23;
      v27 = 10 * v25;
      if ( v26 >= 10 * v25 )
        v27 = v26;
      *(_DWORD *)(a1 + 76) = v27;
      v28 = v27 + 5;
      v29 = (unsigned int)(v28 / 10) < *(_DWORD *)(a1 + 196);
      *(_DWORD *)(a1 + 216) = v28 / 10;
      LOBYTE(v20) = v29;
      *a4 = 0;
      *(_BYTE *)(a1 + 224) = v29;
    }
    else
    {
      *a4 = 0;
      *(_DWORD *)(a1 + 212) = 0;
      *a3 = 0;
    }
  }
  if ( v9 )
    LOBYTE(v20) = ObfDereferenceObject(v9);
  return v20;
}
