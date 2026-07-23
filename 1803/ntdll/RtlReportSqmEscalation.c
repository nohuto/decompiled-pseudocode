/*
 * XREFs of RtlReportSqmEscalation @ 0x1800D7320
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 */

__int64 __fastcall RtlReportSqmEscalation(int a1, ULONG a2, ULONG a3, __int64 a4, _DWORD *a5)
{
  HANDLE v7; // r14
  _DWORD *v9; // rsi
  unsigned int UniqueProcess; // r15d
  unsigned int UniqueThread; // r12d
  NTSTATUS v12; // edi
  _OWORD *v13; // rcx
  __int64 v14; // rax
  __int128 v15; // xmm1
  int v16; // eax
  NTSTATUS v17; // eax
  HANDLE SectionHandle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v19; // [rsp+58h] [rbp-A8h]
  ULONG v20; // [rsp+5Ch] [rbp-A4h]
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _PORT_MESSAGE ReceiveMessage[35]; // [rsp+B0h] [rbp-50h] BYREF
  _PORT_MESSAGE SendMessageA[35]; // [rsp+630h] [rbp+530h] BYREF

  v20 = a3;
  v19 = a2;
  memset(SendMessageA, 0, sizeof(SendMessageA));
  memset(ReceiveMessage, 0, sizeof(ReceiveMessage));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  SectionHandle = 0LL;
  v7 = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  MaximumSize.QuadPart = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v9 = a5;
  UniqueProcess = (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = (unsigned int)NtCurrentTeb()->ClientId.UniqueThread;
  if ( !a5 )
    goto LABEL_13;
  if ( *a5 == 3468 && a5[1] <= 0xAu )
  {
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Length = 48;
    MaximumSize.QuadPart = 3468LL;
    v12 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v12 < 0
      || !SectionHandle
      || (v12 = ZwMapViewOfSection(
                  SectionHandle,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &BaseAddress,
                  0LL,
                  0LL,
                  0LL,
                  &ViewSize,
                  ViewShare,
                  0,
                  4u),
          v12 < 0) )
    {
LABEL_24:
      if ( BaseAddress )
      {
        ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        if ( SectionHandle )
        {
          ZwClose(SectionHandle);
          SectionHandle = 0LL;
        }
      }
      if ( v7 )
        ZwClose(v7);
      return (unsigned int)v12;
    }
    v13 = BaseAddress;
    if ( BaseAddress )
    {
      v14 = 27LL;
      do
      {
        *v13 = *(_OWORD *)v9;
        v13[1] = *((_OWORD *)v9 + 1);
        v13[2] = *((_OWORD *)v9 + 2);
        v13[3] = *((_OWORD *)v9 + 3);
        v13[4] = *((_OWORD *)v9 + 4);
        v13[5] = *((_OWORD *)v9 + 5);
        v13[6] = *((_OWORD *)v9 + 6);
        v13 += 8;
        v15 = *((_OWORD *)v9 + 7);
        v9 += 32;
        *(v13 - 1) = v15;
        --v14;
      }
      while ( v14 );
      *(_QWORD *)v13 = *(_QWORD *)v9;
      *((_DWORD *)v13 + 2) = v9[2];
LABEL_13:
      memset(SendMessageA, 0, sizeof(SendMessageA));
      *(&SendMessageA[1].MessageId + 1) = v19;
      SendMessageA[1].CallbackId = v20;
      *(_QWORD *)&SendMessageA[2].u1.s1.DataLength = SectionHandle;
      SendMessageA[0].u1.Length = 91751760;
      SendMessageA[1].u1.Length = 0x40000000;
      SendMessageA[1].ClientId.UniqueProcess = (HANDLE)__PAIR64__(UniqueThread, UniqueProcess);
      *((_DWORD *)&SendMessageA[1].DoNotUseThisField + 2) = a1;
      *(_QWORD *)((char *)&SendMessageA[1].DoNotUseThisField + 12) = a4;
      memset(ReceiveMessage, 0, sizeof(ReceiveMessage));
      ReceiveMessage[0].u1.Length = 91751760;
      v16 = sub_1800D7658(SendMessageA, ReceiveMessage);
      if ( v16 >= 0 )
      {
        if ( v16 == 258 )
        {
          v12 = -1073741248;
        }
        else
        {
          v7 = ReceiveMessage[1].ClientId.UniqueProcess;
          if ( ReceiveMessage[1].ClientId.UniqueProcess )
          {
            while ( 1 )
            {
              v17 = ZwWaitForSingleObject(v7, 1u, 0LL);
              v12 = v17;
              if ( v17 < 0 || v17 == 258 )
                break;
              if ( v17 != 192 && v17 != 257 )
                goto LABEL_23;
            }
          }
          else
          {
LABEL_23:
            v12 = 0;
          }
        }
      }
      else
      {
        v12 = -1073741823;
      }
      goto LABEL_24;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v12;
}
