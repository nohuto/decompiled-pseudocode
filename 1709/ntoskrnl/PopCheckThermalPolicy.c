/*
 * XREFs of PopCheckThermalPolicy @ 0x1406FFC0C
 * Callers:
 *     PopThermalWorker @ 0x140700090 (PopThermalWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400B05A0 (IoGetDeviceAttachmentBaseRef.c)
 *     PopPrintEx @ 0x14013284C (PopPrintEx.c)
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
  __int64 i; // rcx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // r8d
  int v20; // eax
  unsigned int v21; // edx
  int v22; // r10d
  int v23; // r9d
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // ecx
  bool v28; // cf

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(a1 + 48));
  v9 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
    DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  if ( DeviceNode )
    v11 = (const wchar_t *)*((_QWORD *)DeviceNode + 36);
  else
    v11 = &word_1405F52C0;
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
  for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(a1 + 144); i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(a1 + 128) >= *(_DWORD *)(a1 + 4 * i + 148) )
      break;
  }
  v17 = *(unsigned int *)(a1 + 104);
  *(_DWORD *)(a1 + 220) = i;
  if ( a2 - *(_QWORD *)(a1 + 96) >= v17 )
  {
    v19 = *(_DWORD *)(a1 + 128);
    if ( *(_DWORD *)(a1 + 80) != 100 || (v18 = *(_DWORD *)(a1 + 132)) != 0 && v19 >= v18 )
    {
      if ( (*(_BYTE *)(a1 + 65) & 1) == 0 )
      {
        v20 = 10000 * *(_DWORD *)(a1 + 124);
        *(_QWORD *)(a1 + 96) = 0LL;
        *(_DWORD *)(a1 + 104) = v20;
        *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 132);
      }
      v21 = v19 - *(_DWORD *)(a1 + 108);
      v22 = *(_DWORD *)(a1 + 76);
      v23 = v21 * *(_DWORD *)(a1 + 116) + *(_DWORD *)(a1 + 120) * (v19 - *(_DWORD *)(a1 + 132));
      *a4 = v23;
      if ( !v21 || ((v21 ^ v23) & 0x80000000) == 0 )
        v22 -= v23;
      *(_DWORD *)(a1 + 108) = v19;
      *(_QWORD *)(a1 + 96) = a2;
      *a3 = 1;
      if ( v22 > 1000 )
        v22 = 1000;
      *(_DWORD *)(a1 + 212) = 1;
      v24 = *(_DWORD *)(a1 + 192);
      v25 = 0;
      if ( v22 >= 0 )
        v25 = v22;
      v26 = 10 * v24;
      if ( v25 >= 10 * v24 )
        v26 = v25;
      *(_DWORD *)(a1 + 76) = v26;
      v27 = v26 + 5;
      v28 = (unsigned int)(v27 / 10) < *(_DWORD *)(a1 + 196);
      *(_DWORD *)(a1 + 216) = v27 / 10;
      LOBYTE(v18) = v28;
      *a4 = 0;
      *(_BYTE *)(a1 + 224) = v28;
    }
    else
    {
      *a4 = 0;
      *(_DWORD *)(a1 + 212) = 0;
      *a3 = 0;
    }
  }
  else
  {
    *a4 = 0;
    LOBYTE(v18) = *(_BYTE *)(a1 + 65) & 1;
    *a3 = v18;
  }
  if ( v9 )
    LOBYTE(v18) = ObfDereferenceObject(v9);
  return v18;
}
