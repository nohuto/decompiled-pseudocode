/*
 * XREFs of IopCreateArcName @ 0x14059C120
 * Callers:
 *     IoCreateArcName @ 0x14059C110 (IoCreateArcName.c)
 *     IopCreateArcNamesDisk @ 0x1407F872C (IopCreateArcNamesDisk.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     IoBuildDeviceIoControlRequest @ 0x14004AAA0 (IoBuildDeviceIoControlRequest.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     PcVerifyPartitionTable @ 0x1401536E4 (PcVerifyPartitionTable.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140153C34 (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x140153C64 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoCreateSymbolicLink @ 0x1404577A0 (IoCreateSymbolicLink.c)
 *     IopBuildSynchronousFsdRequest @ 0x1404DDEB0 (IopBuildSynchronousFsdRequest.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     IopVerifyDiskSignature @ 0x14059C694 (IopVerifyDiskSignature.c)
 *     VhdiVerifyBootDisk @ 0x1407473A0 (VhdiVerifyBootDisk.c)
 */

__int64 __fastcall IopCreateArcName(struct _DEVICE_OBJECT *a1, unsigned int a2)
{
  PVOID *v2; // rax
  int *PoolWithTag; // r14
  IRP *v5; // rbx
  NTSTATUS Status; // ebx
  IRP *v7; // rbx
  unsigned int v8; // ecx
  bool v9; // zf
  LARGE_INTEGER v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // r13
  IRP *v13; // rax
  IRP *v14; // rbx
  int v15; // r12d
  SIZE_T OutputBufferLength; // rdi
  SIZE_T j; // rdx
  IRP *v18; // rbx
  unsigned __int64 v19; // rax
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  int v23; // eax
  __m128i v24; // xmm1
  int v25; // r15d
  bool v26; // bl
  PVOID *v27; // rdi
  PVOID *v28; // r11
  char v29; // dl
  const wchar_t *v30; // r8
  const char *v31; // r15
  int v32; // edi
  unsigned __int64 v34; // rcx
  unsigned __int64 i; // rax
  unsigned __int8 *v36; // rcx
  __int64 v37; // r8
  int v38; // edx
  int v39; // eax
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER v43; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v46[20]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v47; // [rsp+B4h] [rbp-4Ch]
  _BYTE v48[4]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v49; // [rsp+BCh] [rbp-44h]
  char v50[64]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+110h] [rbp+10h] BYREF
  __int64 retaddr; // [rsp+1D8h] [rbp+D8h]

  v2 = (PVOID *)IoArcTableListHead;
  PoolWithTag = 0LL;
  while ( 1 )
  {
    if ( v2 == &IoArcTableListHead )
    {
      if ( a2 == -1 )
      {
        v5 = IoBuildDeviceIoControlRequest(0x2D1080u, a1, 0LL, 0, v48, 0xCu, 0, &Object, &IoStatusBlock);
        if ( !v5 )
          return (unsigned int)-1073741670;
        KeInitializeEvent(&Object, NotificationEvent, 0);
        Status = IofCallDriver(a1, v5);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status < 0 )
          return (unsigned int)Status;
      }
      else
      {
        v49 = a2;
      }
      v7 = IoBuildDeviceIoControlRequest(0x70000u, a1, 0LL, 0, v46, 0x18u, 0, &Object, &IoStatusBlock);
      if ( v7 )
      {
        KeInitializeEvent(&Object, NotificationEvent, 0);
        Status = IofCallDriver(a1, v7);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status < 0 )
          return (unsigned int)Status;
        v8 = v47;
        if ( v47 < 0x200 )
          v8 = 512;
        v9 = a1->DeviceType == 2;
        v10.QuadPart = 0LL;
        v47 = v8;
        if ( v9 )
          v10.QuadPart = 0x8000LL;
        v43 = v10;
        v11 = ViVerifierDriverAddedThunkListHead
            ? ExAllocatePoolWithTagPriority(
                NonPagedPoolNxCacheAligned,
                v8,
                0x20206F49u,
                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
            : ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v8, 0x20206F49u);
        v12 = v11;
        if ( v11 )
        {
          v13 = IopBuildSynchronousFsdRequest(3u, (__int64)a1, v11, v47, &v43, &Object, &IoStatusBlock, retaddr);
          v14 = v13;
          if ( !v13 )
          {
            Status = -1073741670;
            goto LABEL_63;
          }
          v13->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
          KeInitializeEvent(&Object, NotificationEvent, 0);
          Status = IofCallDriver(a1, v14);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( Status >= 0 )
          {
            if ( a1->DeviceType == 2 )
            {
              v25 = 0;
              v34 = (unsigned __int64)v47 >> 2;
              for ( i = 0LL; i < v34; ++i )
                v25 += v12[i];
            }
            else
            {
              v15 = v12[110];
              LODWORD(OutputBufferLength) = 4096;
              for ( j = 4096LL; ; j = OutputBufferLength )
              {
                PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, j, 0x6F426F49u);
                if ( !PoolWithTag )
                {
                  Status = -1073741670;
                  goto LABEL_61;
                }
                v18 = IoBuildDeviceIoControlRequest(
                        0x70050u,
                        a1,
                        0LL,
                        0,
                        PoolWithTag,
                        OutputBufferLength,
                        0,
                        &Object,
                        &IoStatusBlock);
                if ( !v18 )
                  break;
                KeResetEvent(&Object);
                Status = IofCallDriver(a1, v18);
                if ( Status == 259 )
                {
                  KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
                  Status = IoStatusBlock.Status;
                }
                if ( Status != -1073741789 )
                  goto LABEL_32;
                ExFreePoolWithTag(PoolWithTag, 0);
                OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
              }
              Status = -1073741670;
LABEL_32:
              if ( Status < 0 )
                goto LABEL_61;
              v19 = 0LL;
              v20 = 0LL;
              do
              {
                v21 = _mm_loadu_si128((const __m128i *)&v12[v19]);
                v19 += 4LL;
                v22 = _mm_add_epi32(v21, v20);
                v20 = v22;
              }
              while ( v19 < 0x80 );
              v23 = *PoolWithTag;
              v24 = _mm_add_epi32(v22, _mm_srli_si128(v22, 8));
              v25 = _mm_cvtsi128_si32(_mm_add_epi32(v24, _mm_srli_si128(v24, 4)));
              if ( !*PoolWithTag && !v15 )
                PoolWithTag[2] = 0;
              v26 = 0;
              if ( v23 != 2 )
              {
                if ( !v23 && !PoolWithTag[1] && !PoolWithTag[2] )
                  v26 = (unsigned int)PcVerifyPartitionTable(a1, 0) == -1073741637;
LABEL_41:
                v27 = (PVOID *)IoArcTableListHead;
                v28 = &IoArcTableListHead;
                if ( IoArcTableListHead == &IoArcTableListHead )
                {
LABEL_70:
                  Status = -1073741637;
                  goto LABEL_61;
                }
                while ( 1 )
                {
                  if ( !*((_BYTE *)v27 + 72) )
                  {
                    if ( v26 )
                    {
                      if ( *((_BYTE *)v27 + 36) )
                        goto LABEL_45;
                    }
                    else
                    {
                      v29 = IopVerifyDiskSignature(PoolWithTag, v27, &v43);
                      if ( !v29 )
                        goto LABEL_45;
                      if ( v27[7] )
                      {
                        v29 = VhdiVerifyBootDisk(a1);
                        v28 = &IoArcTableListHead;
                      }
                      if ( !v29 )
                        goto LABEL_45;
                    }
                    if ( !(v25 + *((_DWORD *)v27 + 8)) && !v27[8] )
                    {
                      v27[8] = a1;
                      v30 = L"\\Device\\CdRom%d";
                      if ( a1->DeviceType != 2 )
                        v30 = L"\\Device\\Harddisk%d\\Partition0";
                      RtlStringCchPrintfW(pszDest, 0x40uLL, v30, v49);
                      RtlInitUnicodeString(&DestinationString, pszDest);
                      v31 = (const char *)v27[3];
                      RtlStringCchPrintfA(v50, 0x40uLL, "\\ArcName\\%s", v31);
                      Status = IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v50);
                      if ( Status >= 0 )
                      {
                        IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                        RtlFreeUnicodeString(&SymbolicLinkName);
                        if ( a1->DeviceType == 2 )
                        {
                          if ( (unsigned int)InitializationPhase < 2 )
                          {
                            v36 = (unsigned __int8 *)v27[3];
                            v37 = *(_QWORD *)(KeLoaderBlock_0 + 184) - (_QWORD)v36;
                            do
                            {
                              v38 = v36[v37];
                              v39 = *v36 - v38;
                              if ( v39 )
                                break;
                              ++v36;
                            }
                            while ( v38 );
                            if ( !v39 )
                              a1->Flags |= 0x100u;
                          }
                        }
                        else if ( PoolWithTag[1] )
                        {
                          v32 = 1;
                          Status = 0;
                          do
                          {
                            LODWORD(OutputBuffer) = v32;
                            RtlStringCchPrintfW(
                              pszDest,
                              0x40uLL,
                              L"\\Device\\Harddisk%d\\Partition%d",
                              v49,
                              OutputBuffer);
                            RtlInitUnicodeString(&DestinationString, pszDest);
                            RtlStringCchPrintfA(v50, 0x40uLL, "\\ArcName\\%spartition(%d)", v31, v32);
                            if ( IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v50) >= 0 )
                            {
                              IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                              RtlFreeUnicodeString(&SymbolicLinkName);
                            }
                            ++v32;
                          }
                          while ( v32 - 1 < (unsigned int)PoolWithTag[1] );
                        }
                      }
LABEL_61:
                      if ( PoolWithTag )
                        ExFreePoolWithTag(PoolWithTag, 0);
                      goto LABEL_63;
                    }
                  }
LABEL_45:
                  v27 = (PVOID *)*v27;
                  if ( v27 == v28 )
                    goto LABEL_70;
                }
              }
            }
            v26 = 1;
            goto LABEL_41;
          }
LABEL_63:
          ExFreePoolWithTag(v12, 0);
          return (unsigned int)Status;
        }
      }
      return (unsigned int)-1073741670;
    }
    if ( v2[8] == a1 )
      return 0LL;
    v2 = (PVOID *)*v2;
  }
}
