/*
 * XREFs of RtlSetImageMitigationPolicy @ 0x1800DC7A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x18009B6B0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x18009C4B0 (ZwDeleteValueKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

NTSTATUS __cdecl RtlSetImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  ULONG v5; // r13d
  char v6; // si
  const WCHAR *v10; // rdx
  int inited; // ebx
  int v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  __int32 v15; // edi
  __int32 v16; // edi
  __int32 v17; // edi
  __int32 v18; // edi
  int v19; // edi
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // r9d
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r10
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r9
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r10
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // r9d
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  __int32 v67; // edi
  __int32 v68; // edi
  __int32 v69; // edi
  __int32 v70; // edi
  int v71; // edi
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rcx
  unsigned __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // r8
  unsigned __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  unsigned __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // r8
  unsigned __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rcx
  unsigned __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rdx
  unsigned __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // r9
  __int64 v108; // r10
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // r9
  unsigned __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // r10
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rcx
  HANDLE KeyHandle; // [rsp+38h] [rbp-71h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-59h] BYREF
  _UNICODE_STRING v126; // [rsp+58h] [rbp-51h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 Data; // [rsp+98h] [rbp-11h] BYREF
  unsigned __int64 v129; // [rsp+A0h] [rbp-9h]
  char KeyValueInformation[8]; // [rsp+A8h] [rbp-1h] BYREF
  unsigned int Size; // [rsp+B0h] [rbp+7h]
  size_t Size_4; // [rsp+B4h] [rbp+Bh] BYREF

  KeyHandle = 0LL;
  Data = 0LL;
  v129 = 0LL;
  v5 = Flags & 2;
  v6 = Flags & 1;
  v10 = L"MitigationOptions";
  if ( (Flags & 8) != 0 )
    v10 = L"MitigationAuditOptions";
  inited = RtlInitUnicodeStringEx(&DestinationString, v10);
  if ( inited >= 0 )
  {
    if ( v6 && (BufferSize || Buffer) )
      goto LABEL_111;
    if ( ImagePath )
    {
      inited = RtlInitUnicodeStringEx(&v126, ImagePath);
      if ( inited < 0 )
        goto LABEL_258;
      v12 = sub_180076270(&v126.Length, 131087LL, v5 == 0, &KeyHandle);
    }
    else
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180110B58;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = ZwOpenKey(&KeyHandle, 0x2000Fu, &ObjectAttributes);
    }
    inited = v12;
    if ( v12 < 0 )
      goto LABEL_256;
    if ( v5 )
    {
      v13 = ZwDeleteValueKey(KeyHandle, &DestinationString);
LABEL_255:
      inited = v13;
LABEL_256:
      if ( KeyHandle )
        ZwClose(KeyHandle);
      goto LABEL_258;
    }
    v14 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            KeyValueInformation,
            0x20u,
            &ResultLength);
    inited = v14;
    if ( v14 >= 0 )
    {
      if ( Size > 0x10 )
      {
        inited = -1073741788;
        goto LABEL_256;
      }
      memmove(&Data, &Size_4, Size);
    }
    else if ( v14 != -1073741772 )
    {
      goto LABEL_256;
    }
    if ( Policy > ImageSignaturePolicy )
    {
      v67 = Policy - 9;
      if ( !v67 )
      {
        if ( v6 )
        {
          v30 = 0xFFF0FFFFFFFFFFFFuLL;
          goto LABEL_241;
        }
        if ( BufferSize != 8 )
          goto LABEL_111;
        v120 = *(_QWORD *)Buffer & 4LL;
        if ( (*(_QWORD *)Buffer & 3) != 0 )
        {
          if ( (*(_QWORD *)Buffer & 3LL) == 2 )
          {
            v121 = v120 != 0 ? 6LL : 2LL;
          }
          else if ( (*(_BYTE *)Buffer & 8) != 0 )
          {
            v121 = v120 != 0 ? 7LL : 3LL;
          }
          else
          {
            v121 = v120 != 0 ? 5LL : 1LL;
          }
          v32 = v121 << 48;
        }
        else
        {
          v32 = -(__int64)(v120 != 0) & 0x4000000000000LL;
        }
        v33 = 0xFFF0FFFFFFFFFFFFuLL;
        goto LABEL_252;
      }
      v68 = v67 - 1;
      if ( !v68 )
      {
        if ( v6 )
        {
          Data &= 0xFFFFFFFFFFFFFuLL;
          goto LABEL_254;
        }
        if ( BufferSize != 24 )
          goto LABEL_111;
        v107 = *((_QWORD *)Buffer + 1);
        v108 = *((_QWORD *)Buffer + 2);
        v109 = *(_QWORD *)Buffer & 4LL;
        v110 = v107 & 4;
        v111 = v108 & 4;
        if ( (*(_QWORD *)Buffer & 3) != 0 )
        {
          if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            v113 = (((unsigned __int128)-(__int128)(unsigned __int64)v109 >> 64) & 4) + 2;
          else
            v113 = (((unsigned __int128)-(__int128)(unsigned __int64)v109 >> 64) & 4) + 1;
          v112 = v113 << 52;
        }
        else
        {
          v112 = -(__int64)(v109 != 0) & 0x40000000000000LL;
        }
        v114 = v107 & 3;
        v115 = Data & 0xF00FFFFFFFFFFFFFuLL | v112 & 0xF0FFFFFFFFFFFFFFuLL;
        if ( v114 )
        {
          if ( v114 == 2 )
            v117 = v110 != 0 ? 6LL : 2LL;
          else
            v117 = v110 != 0 ? 5LL : 1LL;
          v116 = v117 << 56;
        }
        else
        {
          v116 = -(__int64)(v110 != 0) & 0x400000000000000LL;
        }
        v53 = (v115 | v116) & 0xFFFFFFFFFFFFFFFLL;
        v118 = v108 & 3;
        if ( v118 )
        {
          if ( v118 == 2 )
            v119 = v111 != 0 ? 6LL : 2LL;
          else
            v119 = v111 != 0 ? 5LL : 1LL;
          v54 = v119 << 60;
        }
        else
        {
          v54 = -(__int64)(v111 != 0) & 0x4000000000000000LL;
        }
        goto LABEL_107;
      }
      v69 = v68 - 1;
      if ( !v69 )
      {
        if ( v6 )
        {
          v129 &= 0xFFFFF0F00000FFFFuLL;
          goto LABEL_254;
        }
        if ( BufferSize == 48 )
        {
          v76 = *((_QWORD *)Buffer + 3) & 4LL;
          if ( (*((_QWORD *)Buffer + 3) & 3) != 0 )
          {
            if ( (*((_QWORD *)Buffer + 3) & 3LL) == 2 )
              v78 = v76 != 0 ? 6LL : 2LL;
            else
              v78 = v76 != 0 ? 5LL : 1LL;
            v77 = v78 << 16;
          }
          else
          {
            v77 = v76 != 0 ? 0x40000 : 0;
          }
          v79 = *((_QWORD *)Buffer + 4) & 4LL;
          v80 = *((_QWORD *)Buffer + 4) & 3LL;
          v81 = v129 & 0xFFFFFFFFFF00FFFFuLL | v77 & 0xFFFFFFFFFF0FFFFFuLL;
          if ( v80 )
          {
            if ( v80 == 2 )
              v83 = v79 != 0 ? 6LL : 2LL;
            else
              v83 = v79 != 0 ? 5LL : 1LL;
            v82 = v83 << 20;
          }
          else
          {
            v82 = v79 != 0 ? 0x400000 : 0;
          }
          v84 = (v81 | v82) & 0xFFFFFFFFF0FFFFFFuLL;
          v85 = *((_QWORD *)Buffer + 5) & 4LL;
          v86 = *((_QWORD *)Buffer + 5) & 3LL;
          if ( v86 )
          {
            if ( v86 == 2 )
              v88 = v85 != 0 ? 6LL : 2LL;
            else
              v88 = v85 != 0 ? 5LL : 1LL;
            v87 = v88 << 24;
          }
          else
          {
            v87 = v85 != 0 ? 0x4000000 : 0;
          }
          v89 = v84 | v87;
          v90 = *(_QWORD *)Buffer & 4LL;
          v91 = *(_QWORD *)Buffer & 3LL;
          v92 = v89 & 0xFFFFFFFF0FFFFFFFuLL;
          if ( v91 )
          {
            if ( v91 == 2 )
              v94 = v90 != 0 ? 6LL : 2LL;
            else
              v94 = v90 != 0 ? 5LL : 1LL;
            v93 = v94 << 28;
          }
          else
          {
            v93 = v90 != 0 ? 0x40000000 : 0;
          }
          v95 = v92 | v93;
          v96 = *((_QWORD *)Buffer + 1) & 4LL;
          v97 = *((_QWORD *)Buffer + 1) & 3LL;
          v98 = v95 & 0xFFFFFFF0FFFFFFFFuLL;
          if ( v97 )
          {
            if ( v97 == 2 )
              v100 = v96 != 0 ? 6LL : 2LL;
            else
              v100 = v96 != 0 ? 5LL : 1LL;
            v99 = v100 << 32;
          }
          else
          {
            v99 = -(__int64)(v96 != 0) & 0x400000000LL;
          }
          v101 = v98 | v99;
          v102 = *((_QWORD *)Buffer + 2) & 4LL;
          v103 = *((_QWORD *)Buffer + 2) & 3LL;
          v104 = v101 & 0xFFFFF0FFFFFFFFFFuLL;
          if ( v103 )
          {
            if ( v103 == 2 )
              v106 = v102 != 0 ? 6LL : 2LL;
            else
              v106 = v102 != 0 ? 5LL : 1LL;
            v105 = v106 << 40;
          }
          else
          {
            v105 = -(__int64)(v102 != 0) & 0x40000000000LL;
          }
          v129 = v104 | v105;
          goto LABEL_254;
        }
        goto LABEL_111;
      }
      v70 = v69 - 1;
      if ( v70 )
      {
        v71 = v70 - 1;
        if ( v71 )
        {
          if ( v71 != 1 )
            goto LABEL_256;
          if ( v6 )
          {
            Data &= 0xFFFFFFFFFFFF0FFFuLL;
            goto LABEL_254;
          }
          if ( BufferSize != 8 )
            goto LABEL_111;
          v72 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
              v32 = v72 != 0 ? 24576LL : 0x2000LL;
            else
              v32 = v72 != 0 ? 20480LL : 4096LL;
          }
          else
          {
            v32 = v72 != 0 ? 0x4000 : 0;
          }
          v38 = Data & 0xFFFFFFFFFFFF0FFFuLL;
        }
        else
        {
          if ( v6 )
          {
            Data &= 0xFFFFFFFFFFFFFF0FuLL;
            goto LABEL_254;
          }
          if ( BufferSize != 8 )
            goto LABEL_111;
          v73 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            {
              v32 = v73 != 0 ? 96LL : 32LL;
            }
            else if ( (*(_BYTE *)Buffer & 8) != 0 )
            {
              v32 = v73 != 0 ? 112LL : 48LL;
            }
            else
            {
              v32 = v73 != 0 ? 80LL : 16LL;
            }
          }
          else
          {
            v32 = v73 != 0 ? 0x40 : 0;
          }
          v38 = Data & 0xFFFFFFFFFFFFFF0FuLL;
        }
        goto LABEL_253;
      }
      if ( v6 )
      {
        v129 &= 0xFFFFFF0FFFFFFFFFuLL;
        goto LABEL_254;
      }
      if ( BufferSize != 8 )
        goto LABEL_111;
      v74 = *(_QWORD *)Buffer & 4LL;
      if ( (*(_QWORD *)Buffer & 3) != 0 )
      {
        if ( (*(_QWORD *)Buffer & 3LL) != 2 )
        {
          v66 = 0xFFFFFF0FFFFFFFFFuLL;
          if ( (*(_BYTE *)Buffer & 8) != 0 )
            v75 = v74 != 0 ? 7LL : 3LL;
          else
            v75 = v74 != 0 ? 5LL : 1LL;
          v25 = v75 << 36;
          goto LABEL_138;
        }
        v25 = (v74 != 0 ? 6LL : 2LL) << 36;
      }
      else
      {
        v25 = -(__int64)(v74 != 0) & 0x4000000000LL;
      }
      v66 = 0xFFFFFF0FFFFFFFFFuLL;
    }
    else
    {
      if ( Policy != ImageSignaturePolicy )
      {
        if ( Policy == ImageDepPolicy )
        {
          if ( v6 )
          {
            Data &= 0xFFFFFFFFFFFFFFF0uLL;
            goto LABEL_254;
          }
          if ( BufferSize != 8 )
            goto LABEL_111;
          v56 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            {
              v32 = v56 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)Buffer & 8) != 0 )
            {
              v32 = v56 != 0 ? 7LL : 3LL;
            }
            else
            {
              v32 = v56 != 0 ? 5LL : 1LL;
            }
          }
          else
          {
            v32 = v56 != 0 ? 4 : 0;
          }
          v38 = Data & 0xFFFFFFFFFFFFFFF0uLL;
          goto LABEL_253;
        }
        v15 = Policy - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 2;
                if ( v19 )
                {
                  if ( v19 != 1 )
                    goto LABEL_256;
                  if ( v6 )
                  {
                    Data &= 0xFFFFF0FFFFFFFFFFuLL;
                    v129 &= 0xFFFFFFFFFFFFF0FFuLL;
LABEL_254:
                    v13 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, &Data, 0x10u);
                    goto LABEL_255;
                  }
                  if ( BufferSize == 16 )
                  {
                    v20 = *((_QWORD *)Buffer + 1);
                    v21 = v20 & 4;
                    v22 = *(_QWORD *)Buffer & 4LL;
                    if ( (*(_QWORD *)Buffer & 3) != 0 )
                    {
                      if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                      {
                        v26 = Data & 0xFFFFF0FFFFFFFFFFuLL | ((v22 != 0 ? 6LL : 2LL) << 40);
                        v24 = v129;
                        Data = v26;
                        v25 = v21 != 0 ? 1536LL : 512LL;
                        goto LABEL_44;
                      }
                      if ( (*(_BYTE *)Buffer & 8) != 0 )
                        v27 = v22 != 0 ? 7LL : 3LL;
                      else
                        v27 = v22 != 0 ? 5LL : 1LL;
                      v24 = v129;
                      Data = Data & 0xFFFFF0FFFFFFFFFFuLL | (v27 << 40);
                      v28 = v20 & 3;
                      if ( v28 )
                      {
                        if ( v28 != 2LL )
                        {
                          v25 = v21 != 0 ? 1280LL : 256LL;
                          goto LABEL_44;
                        }
                        goto LABEL_34;
                      }
                    }
                    else
                    {
                      v23 = Data & 0xFFFFF0FFFFFFFFFFuLL | -(__int64)(v22 != 0) & 0x40000000000LL;
                      v24 = v129;
                      Data = v23;
                      if ( (v20 & 3) == 2 )
                      {
LABEL_34:
                        v25 = v21 != 0 ? 1536LL : 512LL;
LABEL_44:
                        v29 = v24 & 0xFFFFFFFFFFFFF0FFuLL;
LABEL_139:
                        v129 = v29 | v25;
                        goto LABEL_254;
                      }
                    }
                    v25 = v21 != 0 ? 0x400 : 0;
                    goto LABEL_44;
                  }
LABEL_111:
                  inited = -1073741811;
                  goto LABEL_256;
                }
                if ( v6 )
                {
                  v30 = 0xFFFFFFF0FFFFFFFFuLL;
LABEL_241:
                  Data &= v30;
                  goto LABEL_254;
                }
                if ( BufferSize != 8 )
                  goto LABEL_111;
                v31 = *(_QWORD *)Buffer & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  v33 = 0xFFFFFFF0FFFFFFFFuLL;
                  if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                    v34 = v31 != 0 ? 6LL : 2LL;
                  else
                    v34 = v31 != 0 ? 5LL : 1LL;
                  v32 = v34 << 32;
                }
                else
                {
                  v32 = -(__int64)(v31 != 0) & 0x400000000LL;
                  v33 = 0xFFFFFFF0FFFFFFFFuLL;
                }
              }
              else
              {
                if ( v6 )
                {
                  v30 = 0xFFFFFFFF0FFFFFFFuLL;
                  goto LABEL_241;
                }
                if ( BufferSize != 8 )
                  goto LABEL_111;
                v33 = 0xFFFFFFFF0FFFFFFFuLL;
                v35 = *(_QWORD *)Buffer & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                    v36 = v35 != 0 ? 6LL : 2LL;
                  else
                    v36 = v35 != 0 ? 5LL : 1LL;
                  v32 = v36 << 28;
                }
                else
                {
                  v32 = v35 != 0 ? 0x40000000 : 0;
                }
              }
              goto LABEL_252;
            }
            if ( v6 )
            {
              Data &= 0xFFFFFFFFF0FFFFFFuLL;
              goto LABEL_254;
            }
            if ( BufferSize != 8 )
              goto LABEL_111;
            v37 = *(_QWORD *)Buffer & 4LL;
            if ( (*(_QWORD *)Buffer & 3) != 0 )
            {
              if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                v39 = v37 != 0 ? 6LL : 2LL;
              else
                v39 = v37 != 0 ? 5LL : 1LL;
              v32 = v39 << 24;
            }
            else
            {
              v32 = v37 != 0 ? 0x4000000 : 0;
            }
            v38 = Data & 0xFFFFFFFFF0FFFFFFuLL;
LABEL_253:
            Data = v38 | v32;
            goto LABEL_254;
          }
          if ( v6 )
          {
            v30 = 0xFFFFFF0FFFFFFFFFuLL;
            goto LABEL_241;
          }
          if ( BufferSize != 8 )
            goto LABEL_111;
          v40 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) != 2 )
            {
              v33 = 0xFFFFFF0FFFFFFFFFuLL;
              if ( (*(_BYTE *)Buffer & 8) != 0 )
                v41 = v40 != 0 ? 7LL : 3LL;
              else
                v41 = v40 != 0 ? 5LL : 1LL;
              v32 = v41 << 36;
              goto LABEL_252;
            }
            v32 = (v40 != 0 ? 6LL : 2LL) << 36;
          }
          else
          {
            v32 = -(__int64)(v40 != 0) & 0x4000000000LL;
          }
          v33 = 0xFFFFFF0FFFFFFFFFuLL;
LABEL_252:
          v38 = v33 & Data;
          goto LABEL_253;
        }
        if ( v6 )
        {
          Data &= 0xFFFFFFFFFF00F0FFuLL;
          goto LABEL_254;
        }
        if ( BufferSize != 24 )
          goto LABEL_111;
        v42 = *((_QWORD *)Buffer + 1);
        v43 = *((_QWORD *)Buffer + 2);
        v44 = v42 & 4;
        v45 = v43 & 4;
        v46 = *(_QWORD *)Buffer & 4LL;
        if ( (*(_QWORD *)Buffer & 3) != 0 )
        {
          if ( (*(_QWORD *)Buffer & 3LL) == 2 )
          {
            v47 = (((unsigned __int128)-(__int128)(unsigned __int64)v46 >> 64) & 0x400) + 512;
          }
          else if ( (*(_BYTE *)Buffer & 8) != 0 )
          {
            v47 = (((unsigned __int128)-(__int128)(unsigned __int64)v46 >> 64) & 0x400) + 768;
          }
          else
          {
            v47 = (((unsigned __int128)-(__int128)(unsigned __int64)v46 >> 64) & 0x400) + 256;
          }
        }
        else
        {
          v47 = ((unsigned __int128)-(__int128)(unsigned __int64)v46 >> 64) & 0x400;
        }
        v48 = v42 & 3;
        v49 = Data & 0xFFFFFFFFFFF0F0FFuLL | v47 & 0xFFFFFFFFFFF0FFFFuLL;
        if ( v48 )
        {
          if ( v48 == 2 )
            v51 = v44 != 0 ? 6LL : 2LL;
          else
            v51 = v44 != 0 ? 5LL : 1LL;
          v50 = v51 << 16;
        }
        else
        {
          v50 = v44 != 0 ? 0x40000 : 0;
        }
        v52 = v43 & 3;
        v53 = (v49 | v50) & 0xFFFFFFFFFF0FFFFFuLL;
        if ( v52 )
        {
          if ( v52 == 2 )
            v55 = v45 != 0 ? 6LL : 2LL;
          else
            v55 = v45 != 0 ? 5LL : 1LL;
          v54 = v55 << 20;
        }
        else
        {
          v54 = v45 != 0 ? 0x400000 : 0;
        }
LABEL_107:
        Data = v53 | v54;
        goto LABEL_254;
      }
      if ( v6 )
      {
        v30 = 0xFFFF0FFFFFFFFFFFuLL;
        goto LABEL_241;
      }
      if ( BufferSize != 16 )
        goto LABEL_111;
      v57 = *((_QWORD *)Buffer + 1);
      v58 = v57 & 4;
      v59 = *(_QWORD *)Buffer & 4LL;
      if ( (*(_QWORD *)Buffer & 3) != 0 )
      {
        if ( (*(_QWORD *)Buffer & 3LL) == 2 )
        {
          v61 = v59 != 0 ? 6LL : 2LL;
        }
        else if ( (*(_BYTE *)Buffer & 8) != 0 )
        {
          v61 = v59 != 0 ? 7LL : 3LL;
        }
        else
        {
          v61 = v59 != 0 ? 5LL : 1LL;
        }
        v60 = v61 << 44;
      }
      else
      {
        v60 = -(__int64)(v59 != 0) & 0x400000000000LL;
      }
      Data = Data & 0xFFFF0FFFFFFFFFFFuLL | v60;
      v62 = v57 & 3;
      if ( v62 )
      {
        if ( v62 == 2LL )
        {
          v63 = (v58 != 0 ? 6LL : 2LL) << 44;
          v65 = v58 != 0 ? 96LL : 32LL;
        }
        else
        {
          v63 = (v58 != 0 ? 5LL : 1LL) << 44;
          v65 = v58 != 0 ? 80LL : 16LL;
        }
        v64 = v65 & 0xFFFF0FFFFFFFFFFFuLL;
      }
      else
      {
        v63 = v58 != 0 ? 0x40uLL : 0;
        v64 = -(__int64)(v58 != 0) & 0x400000000000LL;
      }
      v25 = v64 | v63;
      v66 = 0xFFFF0FFFFFFFFF0FuLL;
    }
LABEL_138:
    v29 = v66 & v129;
    goto LABEL_139;
  }
LABEL_258:
  if ( inited == -1073741772 && v5 )
    return 0;
  return inited;
}
