/*
 * XREFs of sub_1800CD0D8 @ 0x1800CD0D8
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_18004AEE4 @ 0x18004AEE4 (sub_18004AEE4.c)
 *     LdrQueryImageFileKeyOption @ 0x18004B060 (LdrQueryImageFileKeyOption.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004BD30 (RtlQueryEnvironmentVariable_U.c)
 *     RtlUnicodeStringToInteger @ 0x180074BF0 (RtlUnicodeStringToInteger.c)
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     __chkstk @ 0x18009F810 (__chkstk.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800CC970 @ 0x1800CC970 (sub_1800CC970.c)
 *     sub_1800CCC9C @ 0x1800CCC9C (sub_1800CCC9C.c)
 *     sub_1800D00B4 @ 0x1800D00B4 (sub_1800D00B4.c)
 *     sub_1800D0288 @ 0x1800D0288 (sub_1800D0288.c)
 *     sub_1800D0368 @ 0x1800D0368 (sub_1800D0368.c)
 *     sub_1800D0488 @ 0x1800D0488 (sub_1800D0488.c)
 *     sub_1800D48E4 @ 0x1800D48E4 (sub_1800D48E4.c)
 *     sub_1800DBE70 @ 0x1800DBE70 (sub_1800DBE70.c)
 *     sub_1801042E8 @ 0x1801042E8 (sub_1801042E8.c)
 */

__int64 __fastcall sub_1800CD0D8(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4, HANDLE *a5, __int64 a6)
{
  unsigned __int8 v6; // r12
  HANDLE *v7; // rsi
  HANDLE *v8; // r15
  HANDLE v10; // rbx
  unsigned int v11; // edi
  char v12; // r13
  __int64 v13; // rax
  int v14; // eax
  void *v15; // rdi
  ULONG v16; // ecx
  char v17; // al
  _BYTE *v18; // rsi
  NTSTATUS v19; // eax
  NTSTATUS v20; // edi
  void *v21; // r15
  int v22; // ecx
  ULONG v23; // ebx
  PVOID ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v26; // eax
  unsigned int v27; // eax
  NTSTATUS v28; // eax
  int v29; // edi
  _BYTE *v30; // rdi
  NTSTATUS v31; // eax
  void *v32; // rsi
  int v33; // ecx
  ULONG v34; // ebx
  PVOID v35; // rcx
  PVOID v36; // rax
  NTSTATUS v37; // eax
  unsigned int v38; // eax
  __int64 i; // rdi
  const WCHAR *v40; // rdx
  _BYTE *v41; // rax
  NTSTATUS inited; // eax
  _BYTE *v43; // rdi
  NTSTATUS v44; // eax
  void *v45; // rsi
  int v46; // ecx
  ULONG v47; // ebx
  PVOID v48; // rcx
  PVOID v49; // rax
  NTSTATUS v50; // eax
  unsigned int v51; // eax
  ULONG v52; // ecx
  void *v53; // rdi
  int v54; // eax
  __int64 v55; // rdx
  unsigned __int16 *v56; // r13
  HANDLE v57; // r13
  _BYTE *v58; // rsi
  NTSTATUS v59; // eax
  NTSTATUS v60; // edi
  void *v61; // r15
  ULONG v62; // ebx
  PVOID v63; // rcx
  PVOID v64; // rax
  NTSTATUS v65; // eax
  int v66; // ecx
  unsigned int v67; // eax
  __int64 v68; // rcx
  char v69; // al
  ULONG Length; // [rsp+20h] [rbp-E0h]
  ULONG Lengtha; // [rsp+20h] [rbp-E0h]
  ULONG Lengthb; // [rsp+20h] [rbp-E0h]
  __int64 v74; // [rsp+30h] [rbp-D0h]
  __int64 v75; // [rsp+30h] [rbp-D0h]
  __int64 v76; // [rsp+30h] [rbp-D0h]
  __int64 v77; // [rsp+30h] [rbp-D0h]
  __int64 v78; // [rsp+30h] [rbp-D0h]
  __int64 v79; // [rsp+30h] [rbp-D0h]
  __int64 v80; // [rsp+30h] [rbp-D0h]
  __int64 v81; // [rsp+30h] [rbp-D0h]
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v85; // [rsp+54h] [rbp-ACh] BYREF
  ULONG v86; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v87; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v88; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE *v89; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v90; // [rsp+70h] [rbp-90h]
  unsigned int v91; // [rsp+78h] [rbp-88h] BYREF
  HANDLE *v92; // [rsp+80h] [rbp-80h]
  void *v93; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v95; // [rsp+98h] [rbp-68h] BYREF
  int v96; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING ValueName; // [rsp+A8h] [rbp-58h] BYREF
  _UNICODE_STRING String; // [rsp+B8h] [rbp-48h] BYREF
  _UNICODE_STRING v99; // [rsp+C8h] [rbp-38h] BYREF
  _UNICODE_STRING v100; // [rsp+D8h] [rbp-28h] BYREF
  _UNICODE_STRING v101; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v102; // [rsp+F8h] [rbp-8h]
  __int64 v103; // [rsp+100h] [rbp+0h]
  _UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v107[1024]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v108[1024]; // [rsp+950h] [rbp+850h] BYREF
  _BYTE v109[1024]; // [rsp+D50h] [rbp+C50h] BYREF
  char v110; // [rsp+1150h] [rbp+1050h] BYREF
  WCHAR SourceString[200]; // [rsp+1170h] [rbp+1070h] BYREF

  v6 = 0;
  v7 = a5;
  v8 = a4;
  v102 = a6;
  v92 = a4;
  *a4 = 0LL;
  v10 = 0LL;
  *a5 = 0LL;
  v11 = 0;
  Handle = 0LL;
  v12 = 1;
  KeyHandle = 0LL;
  v91 = 0;
  v93 = 0LL;
  v95 = 0LL;
  v13 = *(_QWORD *)(a2 + 32);
  v103 = a3;
  v90 = a1;
  v89 = a5;
  if ( (*(_DWORD *)(v13 + 8) & 0x4000) != 0 )
    goto LABEL_121;
  v14 = sub_180076270(a1, 9LL, 0, &KeyHandle);
  v10 = KeyHandle;
  if ( v14 < 0 )
    goto LABEL_121;
  *v8 = KeyHandle;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && sub_1800CC970(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)sub_1800DBE70(&DestinationString, v10, &v93) >= 0 )
      *a5 = v93;
  }
  v15 = v93;
  sub_18004AEE4(v93, v10, L"DisableHeapLookaside", 4u, &dword_18015D42C, 4u, v74, 0LL);
  sub_18004AEE4(v15, v10, L"FrontEndHeapDebugOptions", 4u, &v91, 4u, v75, 0LL);
  sub_18004AEE4(v15, v10, L"ShutdownFlags", 4u, &byte_18015D430, 4u, v76, 0LL);
  Value = 0;
  sub_18004AEE4(v15, v10, L"UnloadEventTraceDepth", 4u, &Value, 4u, v77, 0LL);
  v16 = dword_180159720;
  if ( Value )
    v16 = Value;
  Value = 0;
  dword_180159720 = v16;
  sub_18004AEE4(v15, v10, L"MaxLoaderThreads", 4u, &Value, 4u, v78, 0LL);
  if ( Value )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = Value;
  Value = 0;
  sub_18004AEE4(v93, v10, L"UseImpersonatedDeviceMap", 4u, &Value, 4u, v79, 0LL);
  v17 = byte_18015C318;
  if ( Value )
    v17 = 1;
  byte_18015C318 = v17;
  Value = 0;
  sub_18004AEE4(v93, v10, L"TracingFlags", 4u, &Value, 4u, v80, 0LL);
  if ( Value )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), Value);
    v10 = KeyHandle;
  }
  Value = 0;
  if ( RtlInitUnicodeStringEx(&ValueName, L"CFGOptions") >= 0 )
  {
    v18 = KeyValueInformation;
    v19 = ZwQueryValueKey(v10, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength);
    v20 = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -2147483643 )
      {
        while ( 1 )
        {
          v23 = ResultLength;
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap(ProcessHeap, Flags + 1572864, ResultLength);
          v21 = Heap;
          if ( !Heap )
            break;
          v18 = Heap;
          Length = v23;
          v10 = KeyHandle;
          v26 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
          v20 = v26;
          if ( v26 >= 0 )
            goto LABEL_18;
          if ( v26 != -2147483643 )
            goto LABEL_41;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
        }
        v10 = KeyHandle;
        v8 = v92;
        goto LABEL_47;
      }
    }
    else
    {
      v21 = 0LL;
LABEL_18:
      v22 = *((_DWORD *)v18 + 1);
      if ( ((v22 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v22 )
        {
          case 4:
            if ( *((_DWORD *)v18 + 2) == 4 )
            {
              ResultLength = 4;
              Value = *((_DWORD *)v18 + 3);
            }
            else
            {
              v20 = -1073741820;
            }
            break;
          case 11:
            v20 = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)&Value & 3) != 0 )
            {
              v20 = -2147483646;
            }
            else
            {
              ResultLength = 4;
              ValueName.Buffer = (PWCH)(v18 + 12);
              ValueName.Length = *((_WORD *)v18 + 4);
              ValueName.MaximumLength = *((_WORD *)v18 + 4);
              v20 = RtlUnicodeStringToInteger(&ValueName, 0, &Value);
            }
            break;
          default:
            v20 = -1073741788;
            break;
        }
      }
      else if ( v22 == 4 )
      {
        ResultLength = *((_DWORD *)v18 + 2);
        v27 = *((_DWORD *)v18 + 2);
        if ( v27 > 4 )
          v20 = -2147483643;
        else
          memmove(&Value, v18 + 12, v27);
      }
      else
      {
        v20 = -1073741788;
      }
LABEL_41:
      if ( v21 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
        v10 = KeyHandle;
      }
      v8 = v92;
    }
    if ( v20 >= 0 && (Value & 1) != 0 )
    {
      sub_1800259B4(0);
      byte_18016F29A = 1;
      sub_1800259B4(1);
    }
LABEL_47:
    v7 = v89;
  }
  if ( (*(_BYTE *)(a2 + 3) & 1) == 0 )
    goto LABEL_53;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180111268;
  ObjectAttributes.RootDirectory = v10;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v28 = ZwOpenKey(&qword_18015BEE0, 1u, &ObjectAttributes);
  v29 = v28;
  if ( v28 == -1073741772 )
  {
    qword_18015BEE0 = 0LL;
    goto LABEL_53;
  }
  if ( v28 >= 0 )
  {
LABEL_53:
    if ( RtlInitUnicodeStringEx(&String, L"MinimumStackCommitInBytes") < 0 )
      goto LABEL_76;
    v30 = v107;
    v31 = ZwQueryValueKey(v10, &String, KeyValuePartialInformation, v107, 0x400u, &v85);
    if ( v31 < 0 )
    {
      if ( v31 != -2147483643 )
        goto LABEL_76;
      while ( 1 )
      {
        v34 = v85;
        v35 = NtCurrentPeb()->ProcessHeap;
        if ( !v35 )
          break;
        v36 = RtlAllocateHeap(v35, Flags + 1572864, v85);
        v32 = v36;
        if ( !v36 )
          break;
        v30 = v36;
        Lengtha = v34;
        v10 = KeyHandle;
        v37 = ZwQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, v36, Lengtha, &v85);
        if ( v37 >= 0 )
          goto LABEL_56;
        if ( v37 != -2147483643 )
          goto LABEL_72;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v30);
      }
    }
    else
    {
      v32 = 0LL;
LABEL_56:
      v33 = *((_DWORD *)v30 + 1);
      if ( ((v33 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v33 == 4 )
        {
          if ( *((_DWORD *)v30 + 2) == 4 )
          {
            v85 = 4;
            Value = *((_DWORD *)v30 + 3);
          }
        }
        else if ( v33 == 1 && ((unsigned __int8)&Value & 3) == 0 )
        {
          v85 = 4;
          String.Buffer = (PWCH)(v30 + 12);
          String.Length = *((_WORD *)v30 + 4);
          String.MaximumLength = *((_WORD *)v30 + 4);
          RtlUnicodeStringToInteger(&String, 0, &Value);
        }
      }
      else if ( v33 == 4 )
      {
        v85 = *((_DWORD *)v30 + 2);
        v38 = *((_DWORD *)v30 + 2);
        if ( v38 <= 4 )
          memmove(&Value, v30 + 12, v38);
      }
LABEL_72:
      if ( !v32 )
        goto LABEL_75;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v32);
    }
    v10 = KeyHandle;
LABEL_75:
    v7 = v89;
LABEL_76:
    if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)Value )
      *(_QWORD *)(a2 + 792) = Value;
    for ( i = 0LL; i != 6; i += 2LL )
    {
      v40 = (&off_180111230)[i];
      Value = 0;
      LdrQueryImageFileKeyOption(v10, v40, 4u, &Value, 4u, 0LL);
      v41 = *(&off_180111230 + i + 1);
      if ( Value )
        *v41 = 1;
      else
        *v41 = 0;
    }
    Value = 0;
    inited = RtlInitUnicodeStringEx(&v99, L"MaxDeadActivationContexts");
    v8 = v92;
    if ( inited >= 0 )
    {
      v43 = v108;
      v44 = ZwQueryValueKey(v10, &v99, KeyValuePartialInformation, v108, 0x400u, &v86);
      if ( v44 < 0 )
      {
        if ( v44 != -2147483643 )
          goto LABEL_109;
        while ( 1 )
        {
          v47 = v86;
          v48 = NtCurrentPeb()->ProcessHeap;
          if ( !v48 )
            break;
          v49 = RtlAllocateHeap(v48, Flags + 1572864, v86);
          v45 = v49;
          if ( !v49 )
            break;
          v43 = v49;
          Lengthb = v47;
          v10 = KeyHandle;
          v50 = ZwQueryValueKey(KeyHandle, &v99, KeyValuePartialInformation, v49, Lengthb, &v86);
          if ( v50 >= 0 )
            goto LABEL_86;
          if ( v50 != -2147483643 )
            goto LABEL_102;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v43);
        }
        v10 = KeyHandle;
      }
      else
      {
        v45 = 0LL;
LABEL_86:
        v46 = *((_DWORD *)v43 + 1);
        if ( ((v46 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v46 == 4 )
          {
            if ( *((_DWORD *)v43 + 2) == 4 )
            {
              v86 = 4;
              Value = *((_DWORD *)v43 + 3);
            }
          }
          else if ( v46 == 1 && ((unsigned __int8)&Value & 3) == 0 )
          {
            v86 = 4;
            v99.Buffer = (PWCH)(v43 + 12);
            v99.Length = *((_WORD *)v43 + 4);
            v99.MaximumLength = *((_WORD *)v43 + 4);
            RtlUnicodeStringToInteger(&v99, 0, &Value);
          }
        }
        else if ( v46 == 4 )
        {
          v86 = *((_DWORD *)v43 + 2);
          v51 = *((_DWORD *)v43 + 2);
          if ( v51 <= 4 )
            memmove(&Value, v43 + 12, v51);
        }
LABEL_102:
        if ( v45 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v45);
          v10 = KeyHandle;
        }
        v52 = dword_180159788;
        if ( Value )
          v52 = Value;
        dword_180159788 = v52;
      }
      v7 = v89;
    }
LABEL_109:
    v53 = v93;
    v6 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
    if ( sub_18004AEE4(v93, v10, L"GlobalFlag", 4u, &v88, 4u, v81, &v95) < 0 )
      goto LABEL_118;
    if ( (v88 & 0x2000100) != 0 )
    {
      if ( !(unsigned int)sub_1800D00B4(a2, v53, v10) )
        v88 &= 0xFDFFFEFF;
      if ( (v88 & 0x2000100) != 0 )
      {
        if ( (int)sub_1800D0368(v90, &v96) < 0 )
          goto LABEL_118;
        if ( !v96 )
          v88 &= 0xFDFFFEFF;
      }
    }
    *(_DWORD *)(a2 + 188) = v88;
LABEL_118:
    v11 = v91;
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
      v12 = 0;
    else
      v95 = 0LL;
LABEL_121:
    LOBYTE(v54) = LdrControlFlowGuardEnforced();
    if ( v54 )
      v11 |= 1u;
    sub_1801042E8(v11, *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL));
    if ( v12 && !byte_18015C298 )
    {
      v56 = v90;
      if ( (MEMORY[0x7FFE03A0] & 1) == 0 )
        goto LABEL_162;
      if ( (int)sub_1800D48E4(v90, v55, &Handle) < 0 )
      {
        Handle = 0LL;
        goto LABEL_162;
      }
      v57 = Handle;
      if ( RtlInitUnicodeStringEx(&v100, L"GlobalFlag") >= 0 )
      {
        v58 = v109;
        v59 = ZwQueryValueKey(v57, &v100, KeyValuePartialInformation, v109, 0x400u, &v87);
        v60 = v59;
        if ( v59 >= 0 )
        {
          v61 = 0LL;
LABEL_138:
          v66 = *((_DWORD *)v58 + 1);
          if ( ((v66 - 3) & 0xFFFFFFFB) != 0 )
          {
            switch ( v66 )
            {
              case 4:
                if ( *((_DWORD *)v58 + 2) == 4 )
                {
                  v87 = 4;
                  v88 = *((_DWORD *)v58 + 3);
                }
                else
                {
                  v60 = -1073741820;
                }
                break;
              case 11:
                v60 = -1073741788;
                break;
              case 1:
                if ( ((unsigned __int8)&v88 & 3) != 0 )
                {
                  v60 = -2147483646;
                }
                else
                {
                  v87 = 4;
                  v100.Buffer = (PWCH)(v58 + 12);
                  v100.Length = *((_WORD *)v58 + 4);
                  v100.MaximumLength = *((_WORD *)v58 + 4);
                  v60 = RtlUnicodeStringToInteger(&v100, 0, &v88);
                }
                break;
              default:
                v60 = -1073741788;
                break;
            }
          }
          else if ( v66 == 4 )
          {
            v87 = *((_DWORD *)v58 + 2);
            v67 = *((_DWORD *)v58 + 2);
            if ( v67 > 4 )
              v60 = -2147483643;
            else
              memmove(&v88, v58 + 12, v67);
          }
          else
          {
            v60 = -1073741788;
          }
LABEL_155:
          if ( v61 )
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v61);
            v10 = KeyHandle;
          }
          v8 = v92;
          goto LABEL_158;
        }
        if ( v59 != -2147483643 )
        {
LABEL_158:
          v7 = v89;
          v56 = v90;
          if ( v60 >= 0 )
          {
            *(_DWORD *)(a2 + 188) |= v88 & 0x2000100;
            v95 = Handle;
          }
LABEL_162:
          v29 = 0;
          if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 || (unsigned __int8)sub_1800D0288() )
          {
            v29 = sub_1800CCC9C(v56, a2, v6, v95, v103, v102);
            if ( v29 >= 0 )
              goto LABEL_182;
            v69 = dword_180156A70;
            if ( (dword_180156A70 & 3) != 0 )
            {
              sub_1800CA554(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                7794,
                (unsigned int)"LdrpInitializeExecutionOptions",
                0,
                "Initializing the application verifier package failed with status 0x%08lx\n",
                v29);
              v69 = dword_180156A70;
            }
            if ( (v69 & 0x10) != 0 )
              __debugbreak();
          }
          else
          {
            if ( v93 || v10 || !*(_BYTE *)(a2 + 2) )
              goto LABEL_182;
            v68 = *(_QWORD *)(a2 + 32);
            v101.Buffer = (PWCH)&v110;
            *(_DWORD *)&v101.Length = 0x200000;
            if ( RtlQueryEnvironmentVariable_U(*(PVOID *)(v68 + 128), (PUNICODE_STRING)&stru_180111220, &v101) < 0
              || (v29 = RtlUnicodeStringToInteger(&v101, 0, &Value), v29 < 0)
              || !Value )
            {
              *(_DWORD *)(a2 + 188) |= 0x70u;
            }
          }
          if ( v29 < 0 )
            goto LABEL_178;
LABEL_182:
          sub_1800D0488(v10);
          goto LABEL_183;
        }
        while ( 1 )
        {
          v62 = v87;
          v63 = NtCurrentPeb()->ProcessHeap;
          if ( !v63 )
            break;
          v64 = RtlAllocateHeap(v63, Flags + 1572864, v87);
          v61 = v64;
          if ( !v64 )
            break;
          v58 = v64;
          v65 = ZwQueryValueKey(v57, &v100, KeyValuePartialInformation, v64, v62, &v87);
          v60 = v65;
          if ( v65 >= 0 )
          {
            v10 = KeyHandle;
            goto LABEL_138;
          }
          if ( v65 != -2147483643 )
          {
            v10 = KeyHandle;
            goto LABEL_155;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v58);
        }
        v10 = KeyHandle;
        v7 = v89;
        v8 = v92;
      }
    }
    v56 = v90;
    goto LABEL_162;
  }
LABEL_178:
  if ( *v8 )
  {
    ZwClose(*v8);
    *v8 = 0LL;
  }
  if ( *v7 )
  {
    ZwClose(*v7);
    *v7 = 0LL;
  }
LABEL_183:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v29;
}
