/*
 * XREFs of sub_1800912E0 @ 0x1800912E0
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180062DA0 (RtlQueryEnvironmentVariable_U.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_18007C110 @ 0x18007C110 (sub_18007C110.c)
 *     sub_18007C1E0 @ 0x18007C1E0 (sub_18007C1E0.c)
 *     sub_18007C34C @ 0x18007C34C (sub_18007C34C.c)
 *     LdrQueryImageFileKeyOption @ 0x18007C560 (LdrQueryImageFileKeyOption.c)
 *     sub_18008A7B4 @ 0x18008A7B4 (sub_18008A7B4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     __chkstk @ 0x1800A9EF0 (__chkstk.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800D6E6C @ 0x1800D6E6C (sub_1800D6E6C.c)
 *     sub_1800D7198 @ 0x1800D7198 (sub_1800D7198.c)
 *     sub_1800D781C @ 0x1800D781C (sub_1800D781C.c)
 *     sub_1800D79F0 @ 0x1800D79F0 (sub_1800D79F0.c)
 *     sub_1800DB144 @ 0x1800DB144 (sub_1800DB144.c)
 *     sub_1800E21DC @ 0x1800E21DC (sub_1800E21DC.c)
 */

__int64 __fastcall sub_1800912E0(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4, HANDLE *a5, __int64 a6)
{
  void *v6; // r15
  __int16 v7; // bx
  HANDLE *v8; // r12
  char v11; // si
  __int64 v12; // rax
  bool v13; // zf
  void *v14; // rbx
  HANDLE v15; // rsi
  _BYTE *v16; // r15
  NTSTATUS v17; // eax
  NTSTATUS v18; // ebx
  NTSTATUS v19; // eax
  NTSTATUS v20; // ebx
  HANDLE v21; // rsi
  _BYTE *v22; // rbx
  NTSTATUS v23; // eax
  __int64 i; // rbx
  const WCHAR *v25; // rdx
  _BYTE *v26; // rax
  HANDLE v27; // rbx
  _BYTE *v28; // rsi
  NTSTATUS v29; // eax
  void *v30; // rbx
  __int64 v31; // rdx
  HANDLE v32; // rsi
  _BYTE *v33; // r15
  NTSTATUS v34; // eax
  NTSTATUS v35; // ebx
  char v36; // al
  HANDLE v38; // rcx
  __int64 v39; // rcx
  void *v40; // r12
  int v41; // ecx
  ULONG Length; // ebx
  PVOID v43; // rcx
  PVOID v44; // rax
  NTSTATUS v45; // eax
  unsigned int v46; // eax
  ULONG v47; // r12d
  PVOID v48; // rcx
  PVOID v49; // rax
  NTSTATUS v50; // eax
  int v51; // ecx
  unsigned int v52; // eax
  ULONG v53; // r12d
  PVOID v54; // rcx
  PVOID v55; // rax
  NTSTATUS v56; // eax
  int v57; // ecx
  unsigned int v58; // eax
  void *v59; // r12
  int v60; // ecx
  ULONG v61; // ebx
  PVOID ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v64; // eax
  unsigned int v65; // eax
  __int64 v66; // [rsp+30h] [rbp-D0h]
  __int64 v67; // [rsp+30h] [rbp-D0h]
  __int64 v68; // [rsp+30h] [rbp-D0h]
  __int64 v69; // [rsp+30h] [rbp-D0h]
  __int64 v70; // [rsp+30h] [rbp-D0h]
  __int64 v71; // [rsp+30h] [rbp-D0h]
  __int64 v72; // [rsp+30h] [rbp-D0h]
  __int64 v73; // [rsp+30h] [rbp-D0h]
  ULONG Buffer; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v75; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v76; // [rsp+48h] [rbp-B8h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v79; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v80; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v81; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE *v82; // [rsp+68h] [rbp-98h]
  void *v83; // [rsp+70h] [rbp-90h] BYREF
  int v84; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v86; // [rsp+88h] [rbp-78h] BYREF
  int v87; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING ValueName; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING String; // [rsp+A8h] [rbp-58h] BYREF
  _UNICODE_STRING v90; // [rsp+B8h] [rbp-48h] BYREF
  _UNICODE_STRING v91; // [rsp+C8h] [rbp-38h] BYREF
  _UNICODE_STRING Value; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v93; // [rsp+E8h] [rbp-18h]
  __int64 v94; // [rsp+F0h] [rbp-10h]
  _UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp+8h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v98[1024]; // [rsp+540h] [rbp+440h] BYREF
  _BYTE v99[1024]; // [rsp+940h] [rbp+840h] BYREF
  _BYTE v100[1024]; // [rsp+D40h] [rbp+C40h] BYREF
  char v101; // [rsp+1140h] [rbp+1040h] BYREF
  WCHAR SourceString[200]; // [rsp+1160h] [rbp+1060h] BYREF

  v6 = 0LL;
  v7 = 0;
  *a4 = 0LL;
  v8 = a4;
  v93 = a6;
  KeyHandle = 0LL;
  *a5 = 0LL;
  v11 = 1;
  v12 = *(_QWORD *)(a2 + 32);
  Handle = 0LL;
  v82 = a4;
  v94 = a3;
  v13 = (*(_DWORD *)(v12 + 8) & 0x4000) == 0;
  v76 = 0;
  v84 = 0;
  v83 = 0LL;
  v86 = 0LL;
  if ( !v13 || sub_18007C34C(a1, 9u, &KeyHandle) < 0 )
  {
LABEL_50:
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
      v7 |= 1u;
    sub_18008A7B4(v7, *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
    if ( v11 && !byte_18015B26C && (MEMORY[0x7FFE03A0] & 1) != 0 )
    {
      if ( (int)sub_1800DB144(a1, v31, &Handle) < 0 )
      {
        Handle = 0LL;
        goto LABEL_61;
      }
      v32 = Handle;
      if ( RtlInitUnicodeStringEx(&v91, L"GlobalFlag") < 0 )
        goto LABEL_61;
      v33 = v100;
      v34 = ZwQueryValueKey(v32, &v91, KeyValuePartialInformation, v100, 0x400u, &v81);
      v35 = v34;
      if ( v34 >= 0 )
      {
        v59 = 0LL;
LABEL_157:
        v60 = *((_DWORD *)v33 + 1);
        if ( ((v60 - 3) & 0xFFFFFFFB) != 0 )
        {
          switch ( v60 )
          {
            case 4:
              if ( *((_DWORD *)v33 + 2) == 4 )
              {
                v81 = 4;
                v75 = *((_DWORD *)v33 + 3);
              }
              else
              {
                v35 = -1073741820;
              }
              break;
            case 11:
              v35 = -1073741788;
              break;
            case 1:
              if ( ((unsigned __int8)&v75 & 3) != 0 )
              {
                v35 = -2147483646;
              }
              else
              {
                v81 = 4;
                v91.Buffer = (PWCH)(v33 + 12);
                v91.Length = *((_WORD *)v33 + 4);
                v91.MaximumLength = *((_WORD *)v33 + 4);
                v35 = RtlUnicodeStringToInteger(&v91, 0, &v75);
              }
              break;
            default:
              v35 = -1073741788;
              break;
          }
        }
        else if ( v60 == 4 )
        {
          v81 = *((_DWORD *)v33 + 2);
          v65 = *((_DWORD *)v33 + 2);
          if ( v65 > 4 )
            v35 = -2147483643;
          else
            memmove(&v75, v33 + 12, v65);
        }
        else
        {
          v35 = -1073741788;
        }
LABEL_179:
        if ( v59 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v59);
        v8 = v82;
        goto LABEL_59;
      }
      if ( v34 != -2147483643 )
      {
LABEL_59:
        if ( v35 >= 0 )
        {
          *(_DWORD *)(a2 + 188) |= v75 & 0x2000100;
          v86 = Handle;
        }
        goto LABEL_61;
      }
      while ( 1 )
      {
        v61 = v81;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( !ProcessHeap )
          break;
        Heap = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1572864, v81);
        v59 = Heap;
        if ( !Heap )
          break;
        v33 = Heap;
        v64 = ZwQueryValueKey(v32, &v91, KeyValuePartialInformation, Heap, v61, &v81);
        v35 = v64;
        if ( v64 >= 0 )
          goto LABEL_157;
        if ( v64 != -2147483643 )
          goto LABEL_179;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v33);
      }
      v8 = v82;
    }
LABEL_61:
    v20 = 0;
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      v20 = sub_1800D7198(a1, a2, v76, v86, v94, v93);
      if ( v20 < 0 )
      {
        v36 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            7802,
            (unsigned int)"LdrpInitializeExecutionOptions",
            0,
            "Initializing the application verifier package failed with status 0x%08lx\n",
            v20);
          v36 = dword_180155A10;
        }
        if ( (v36 & 0x10) != 0 )
          __debugbreak();
LABEL_67:
        if ( v20 < 0 )
          goto LABEL_68;
      }
    }
    else if ( !v83 )
    {
      v38 = KeyHandle;
      if ( KeyHandle || !*(_BYTE *)(a2 + 2) )
        goto LABEL_79;
      v39 = *(_QWORD *)(a2 + 32);
      Value.Buffer = (PWCH)&v101;
      *(_DWORD *)&Value.Length = 0x200000;
      if ( RtlQueryEnvironmentVariable_U(*(PVOID *)(v39 + 128), (PUNICODE_STRING)&stru_1801108B0, &Value) < 0
        || (v20 = RtlUnicodeStringToInteger(&Value, 0, &Buffer), v20 < 0)
        || !Buffer )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
      goto LABEL_67;
    }
    v38 = KeyHandle;
LABEL_79:
    sub_18007C110(v38);
    goto LABEL_72;
  }
  *v8 = KeyHandle;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && (int)sub_1800D6E6C(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)sub_1800E21DC(&DestinationString, KeyHandle, &v83) >= 0 )
      *a5 = v83;
  }
  v14 = v83;
  sub_18007C1E0(v83, KeyHandle, L"DisableHeapLookaside", 4u, &dword_18015C3B8, 4u, v66, 0LL);
  sub_18007C1E0(v14, KeyHandle, L"FrontEndHeapDebugOptions", 4u, &v84, 4u, v67, 0LL);
  sub_18007C1E0(v14, KeyHandle, L"ShutdownFlags", 4u, &byte_18015C3BC, 4u, v68, 0LL);
  Buffer = 0;
  sub_18007C1E0(v14, KeyHandle, L"UnloadEventTraceDepth", 4u, &Buffer, 4u, v69, 0LL);
  if ( Buffer )
    dword_180158690 = Buffer;
  Buffer = 0;
  sub_18007C1E0(v83, KeyHandle, L"MaxLoaderThreads", 4u, &Buffer, 4u, v70, 0LL);
  if ( Buffer )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = Buffer;
  Buffer = 0;
  sub_18007C1E0(v83, KeyHandle, L"UseImpersonatedDeviceMap", 4u, &Buffer, 4u, v71, 0LL);
  if ( Buffer )
    byte_18015B2E8 = 1;
  Buffer = 0;
  sub_18007C1E0(v83, KeyHandle, L"TracingFlags", 4u, &Buffer, 4u, v72, 0LL);
  if ( Buffer )
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), Buffer);
  v15 = KeyHandle;
  Buffer = 0;
  if ( RtlInitUnicodeStringEx(&ValueName, L"CFGOptions") >= 0 )
  {
    v16 = KeyValueInformation;
    v17 = ZwQueryValueKey(v15, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v40 = 0LL;
LABEL_87:
      v41 = *((_DWORD *)v16 + 1);
      if ( ((v41 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v41 )
        {
          case 4:
            if ( *((_DWORD *)v16 + 2) == 4 )
            {
              ResultLength = 4;
              Buffer = *((_DWORD *)v16 + 3);
            }
            else
            {
              v18 = -1073741820;
            }
            break;
          case 11:
            v18 = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)&Buffer & 3) != 0 )
            {
              v18 = -2147483646;
            }
            else
            {
              ResultLength = 4;
              ValueName.Buffer = (PWCH)(v16 + 12);
              ValueName.Length = *((_WORD *)v16 + 4);
              ValueName.MaximumLength = *((_WORD *)v16 + 4);
              v18 = RtlUnicodeStringToInteger(&ValueName, 0, &Buffer);
            }
            break;
          default:
            v18 = -1073741788;
            break;
        }
      }
      else if ( v41 == 4 )
      {
        ResultLength = *((_DWORD *)v16 + 2);
        v46 = *((_DWORD *)v16 + 2);
        if ( v46 > 4 )
          v18 = -2147483643;
        else
          memmove(&Buffer, v16 + 12, v46);
      }
      else
      {
        v18 = -1073741788;
      }
LABEL_109:
      if ( v40 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v40);
      v8 = v82;
    }
    else if ( v17 == -2147483643 )
    {
      while ( 1 )
      {
        Length = ResultLength;
        v43 = NtCurrentPeb()->ProcessHeap;
        if ( !v43 )
          break;
        v44 = RtlAllocateHeap(v43, dword_18015B268 + 1572864, ResultLength);
        v40 = v44;
        if ( !v44 )
          break;
        v16 = v44;
        v45 = ZwQueryValueKey(v15, &ValueName, KeyValuePartialInformation, v44, Length, &ResultLength);
        v18 = v45;
        if ( v45 >= 0 )
          goto LABEL_87;
        if ( v45 != -2147483643 )
          goto LABEL_109;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
      }
      v8 = v82;
      goto LABEL_21;
    }
    if ( v18 >= 0 && (Buffer & 1) != 0 )
    {
      sub_18001DEA8(0);
      byte_18016B282 = 1;
      sub_18001DEA8(1);
    }
LABEL_21:
    v6 = 0LL;
  }
  if ( (*(_BYTE *)(a2 + 3) & 1) == 0 )
    goto LABEL_25;
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180110920;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v19 = ZwOpenKey(&qword_18015AEC0, 1u, &ObjectAttributes);
  v20 = v19;
  if ( v19 == -1073741772 )
  {
    qword_18015AEC0 = 0LL;
LABEL_25:
    v21 = KeyHandle;
    if ( RtlInitUnicodeStringEx(&String, L"MinimumStackCommitInBytes") < 0 )
      goto LABEL_28;
    v22 = v98;
    v23 = ZwQueryValueKey(v21, &String, KeyValuePartialInformation, v98, 0x400u, &v79);
    if ( v23 >= 0 )
    {
LABEL_121:
      v51 = *((_DWORD *)v22 + 1);
      if ( ((v51 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v51 == 4 )
        {
          if ( *((_DWORD *)v22 + 2) == 4 )
          {
            v79 = 4;
            Buffer = *((_DWORD *)v22 + 3);
          }
        }
        else if ( v51 == 1 && ((unsigned __int8)&Buffer & 3) == 0 )
        {
          v79 = 4;
          String.Buffer = (PWCH)(v22 + 12);
          String.Length = *((_WORD *)v22 + 4);
          String.MaximumLength = *((_WORD *)v22 + 4);
          RtlUnicodeStringToInteger(&String, 0, &Buffer);
        }
      }
      else if ( v51 == 4 )
      {
        v79 = *((_DWORD *)v22 + 2);
        v52 = *((_DWORD *)v22 + 2);
        if ( v52 <= 4 )
          memmove(&Buffer, v22 + 12, v52);
      }
LABEL_131:
      if ( v6 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    else
    {
      if ( v23 != -2147483643 )
        goto LABEL_28;
      while ( 1 )
      {
        v47 = v79;
        v48 = NtCurrentPeb()->ProcessHeap;
        if ( !v48 )
          break;
        v49 = RtlAllocateHeap(v48, dword_18015B268 + 1572864, v79);
        v6 = v49;
        if ( !v49 )
          break;
        v22 = v49;
        v50 = ZwQueryValueKey(v21, &String, KeyValuePartialInformation, v49, v47, &v79);
        if ( v50 >= 0 )
        {
          v8 = v82;
          goto LABEL_121;
        }
        if ( v50 != -2147483643 )
        {
          v8 = v82;
          goto LABEL_131;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v22);
      }
      v8 = v82;
    }
    v6 = 0LL;
LABEL_28:
    if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)Buffer )
      *(_QWORD *)(a2 + 792) = Buffer;
    for ( i = 0LL; i != 6; i += 2LL )
    {
      v25 = (&off_180111240)[i];
      Buffer = 0;
      LdrQueryImageFileKeyOption(KeyHandle, v25, 4u, &Buffer, 4u, 0LL);
      v26 = *(&off_180111240 + i + 1);
      if ( Buffer )
        *v26 = 1;
      else
        *v26 = 0;
    }
    v27 = KeyHandle;
    Buffer = 0;
    if ( RtlInitUnicodeStringEx(&v90, L"MaxDeadActivationContexts") >= 0 )
    {
      v28 = v99;
      v29 = ZwQueryValueKey(v27, &v90, KeyValuePartialInformation, v99, 0x400u, &v80);
      if ( v29 >= 0 )
      {
LABEL_143:
        v57 = *((_DWORD *)v28 + 1);
        if ( ((v57 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v57 == 4 )
          {
            if ( *((_DWORD *)v28 + 2) == 4 )
            {
              v80 = 4;
              Buffer = *((_DWORD *)v28 + 3);
            }
          }
          else if ( v57 == 1 && ((unsigned __int8)&Buffer & 3) == 0 )
          {
            v80 = 4;
            v90.Buffer = (PWCH)(v28 + 12);
            v90.Length = *((_WORD *)v28 + 4);
            v90.MaximumLength = *((_WORD *)v28 + 4);
            RtlUnicodeStringToInteger(&v90, 0, &Buffer);
          }
        }
        else if ( v57 == 4 )
        {
          v80 = *((_DWORD *)v28 + 2);
          v58 = *((_DWORD *)v28 + 2);
          if ( v58 <= 4 )
            memmove(&Buffer, v28 + 12, v58);
        }
LABEL_153:
        if ( v6 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
        if ( Buffer )
          dword_180158694 = Buffer;
      }
      else if ( v29 == -2147483643 )
      {
        while ( 1 )
        {
          v53 = v80;
          v54 = NtCurrentPeb()->ProcessHeap;
          if ( !v54 )
            break;
          v55 = RtlAllocateHeap(v54, dword_18015B268 + 1572864, v80);
          v6 = v55;
          if ( !v55 )
            break;
          v28 = v55;
          v56 = ZwQueryValueKey(v27, &v90, KeyValuePartialInformation, v55, v53, &v80);
          if ( v56 >= 0 )
          {
            v8 = v82;
            goto LABEL_143;
          }
          if ( v56 != -2147483643 )
          {
            v8 = v82;
            goto LABEL_153;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v28);
        }
        v8 = v82;
      }
    }
    if ( (*(_DWORD *)(a2 + 188) & 0x100) != 0 )
      v76 = 1;
    v30 = v83;
    if ( sub_18007C1E0(v83, KeyHandle, L"GlobalFlag", 4u, &v75, 4u, v73, &v86) < 0 )
      goto LABEL_48;
    if ( (v75 & 0x2000100) != 0 )
    {
      if ( !(unsigned int)sub_1800D781C(a2, v30, KeyHandle) )
        v75 &= 0xFDFFFEFF;
      if ( (v75 & 0x2000100) != 0 )
      {
        if ( (int)sub_1800D79F0(a1, &v87) < 0 )
          goto LABEL_48;
        if ( !v87 )
          v75 &= 0xFDFFFEFF;
      }
    }
    *(_DWORD *)(a2 + 188) = v75;
LABEL_48:
    v7 = v84;
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      v11 = 0;
    }
    else
    {
      v86 = 0LL;
      v11 = 1;
    }
    goto LABEL_50;
  }
  if ( v19 >= 0 )
    goto LABEL_25;
LABEL_68:
  if ( *v8 )
  {
    ZwClose(*v8);
    *v8 = 0LL;
  }
  if ( *a5 )
  {
    ZwClose(*a5);
    *a5 = 0LL;
  }
LABEL_72:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v20;
}
