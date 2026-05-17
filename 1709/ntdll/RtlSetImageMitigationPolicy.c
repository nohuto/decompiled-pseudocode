/*
 * XREFs of RtlSetImageMitigationPolicy @ 0x1800E17F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079A84 (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     ZwSetValueKey @ 0x1800A0CB0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A1A90 (ZwDeleteValueKey.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlSetImageMitigationPolicy(__int64 a1, int a2, char a3, _QWORD *a4, int a5)
{
  int v5; // r13d
  char v6; // si
  const wchar_t *v10; // rdx
  int inited; // ebx
  int v12; // eax
  int v13; // eax
  int ValueKey; // eax
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // r9d
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r9
  __int64 v42; // r10
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  int v48; // r9d
  __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  int v51; // r10d
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned __int64 v63; // r8
  int v64; // edx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rcx
  bool v68; // zf
  unsigned __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // edi
  int v73; // edi
  int v74; // edi
  int v75; // edi
  int v76; // edi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rcx
  unsigned __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rdx
  unsigned __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rcx
  unsigned __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // r8
  unsigned __int64 v93; // r8
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // r9
  __int64 v99; // r11
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // rcx
  unsigned __int64 v104; // rcx
  int v105; // r9d
  __int64 v106; // rdx
  unsigned __int64 v107; // rdx
  int v108; // r11d
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rcx
  HANDLE Handle; // [rsp+38h] [rbp-71h] BYREF
  char v114[16]; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int16 v115[8]; // [rsp+58h] [rbp-51h] BYREF
  int v116; // [rsp+68h] [rbp-41h]
  __int64 v117; // [rsp+70h] [rbp-39h]
  void *v118; // [rsp+78h] [rbp-31h]
  int v119; // [rsp+80h] [rbp-29h]
  __int128 v120; // [rsp+88h] [rbp-21h]
  unsigned __int64 v121; // [rsp+98h] [rbp-11h] BYREF
  unsigned __int64 v122; // [rsp+A0h] [rbp-9h]
  unsigned int Size; // [rsp+B0h] [rbp+7h]
  size_t Size_4; // [rsp+B4h] [rbp+Bh] BYREF

  Handle = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v5 = a3 & 2;
  v6 = a3 & 1;
  v10 = L"MitigationOptions";
  if ( (a3 & 8) != 0 )
    v10 = L"MitigationAuditOptions";
  inited = RtlInitUnicodeStringEx((__int64)v114, (__int64)v10);
  if ( inited >= 0 )
  {
    if ( v6 && (a5 || a4) )
      goto LABEL_113;
    if ( a1 )
    {
      inited = RtlInitUnicodeStringEx((__int64)v115, a1);
      if ( inited < 0 )
        goto LABEL_252;
      v12 = RtlpOpenImageFileOptionsKeyEx(v115, 131087LL, v5 == 0, &Handle);
    }
    else
    {
      v117 = 0LL;
      v118 = &unk_180113AD8;
      v116 = 48;
      v119 = 576;
      v120 = 0LL;
      v12 = NtOpenKey();
    }
    inited = v12;
    if ( v12 < 0 )
      goto LABEL_250;
    if ( v5 )
    {
      v13 = ZwDeleteValueKey();
LABEL_249:
      inited = v13;
LABEL_250:
      if ( Handle )
        NtClose(Handle);
      goto LABEL_252;
    }
    ValueKey = NtQueryValueKey();
    inited = ValueKey;
    if ( ValueKey >= 0 )
    {
      if ( Size > 0x10 )
      {
        inited = -1073741788;
        goto LABEL_250;
      }
      memmove(&v121, &Size_4, Size);
    }
    else if ( ValueKey != -1073741772 )
    {
      goto LABEL_250;
    }
    if ( a2 > 8 )
    {
      v72 = a2 - 9;
      if ( !v72 )
      {
        if ( v6 )
        {
          v32 = 0xFFF0FFFFFFFFFFFFuLL;
          goto LABEL_235;
        }
        if ( a5 != 8 )
          goto LABEL_113;
        v110 = *a4 & 4LL;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
          {
            v111 = v110 != 0 ? 6LL : 2LL;
          }
          else if ( (*(_BYTE *)a4 & 8) != 0 )
          {
            v111 = v110 != 0 ? 7LL : 3LL;
          }
          else
          {
            v111 = v110 != 0 ? 5LL : 1LL;
          }
        }
        else
        {
          v111 = v110 != 0 ? 4 : 0;
        }
        v33 = 0xFFF0FFFFFFFFFFFFuLL;
        v30 = v111 << 48;
        goto LABEL_245;
      }
      v73 = v72 - 1;
      if ( !v73 )
      {
        if ( v6 )
        {
          v121 &= 0xFFFFFFFFFFFFFuLL;
          goto LABEL_248;
        }
        if ( a5 != 24 )
          goto LABEL_113;
        v98 = a4[1];
        v99 = a4[2];
        v100 = *a4 & 4LL;
        v101 = v98 & 4;
        v102 = v99 & 4;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
            v103 = v100 != 0 ? 6LL : 2LL;
          else
            v103 = v100 != 0 ? 5LL : 1LL;
        }
        else
        {
          v103 = v100 != 0 ? 4 : 0;
        }
        v104 = v121 & 0xFF0FFFFFFFFFFFFFuLL | (v103 << 52);
        v105 = v98 & 3;
        if ( v105 )
        {
          if ( v105 == 2LL )
            v106 = v101 != 0 ? 6LL : 2LL;
          else
            v106 = v101 != 0 ? 5LL : 1LL;
        }
        else
        {
          v106 = v101 != 0 ? 4 : 0;
        }
        v107 = v104 & 0xF0FFFFFFFFFFFFFFuLL | (v106 << 56);
        v108 = v99 & 3;
        if ( !v108 )
        {
          v52 = (unsigned __int64)(v102 != 0 ? 4 : 0) << 60;
          v53 = v107 & 0xFFFFFFFFFFFFFFFLL;
          goto LABEL_104;
        }
        if ( v108 == 2LL )
          v109 = v102 != 0 ? 6LL : 2LL;
        else
          v109 = v102 != 0 ? 5LL : 1LL;
        v56 = v109 << 60;
        v57 = v107 & 0xFFFFFFFFFFFFFFFLL;
LABEL_109:
        v121 = v57 | v56;
        goto LABEL_248;
      }
      v74 = v73 - 1;
      if ( !v74 )
      {
        if ( v6 )
        {
          v122 &= 0xFFFFF0F00000FFFFuLL;
          goto LABEL_248;
        }
        if ( a5 != 48 )
          goto LABEL_113;
        v82 = a4[3] & 4LL;
        if ( (a4[3] & 3) != 0 )
        {
          if ( (a4[3] & 3LL) == 2 )
            v83 = v82 != 0 ? 6LL : 2LL;
          else
            v83 = v82 != 0 ? 5LL : 1LL;
        }
        else
        {
          v83 = v82 != 0 ? 4 : 0;
        }
        v84 = v122 & 0xFFFFFFFFFFF0FFFFuLL | (v83 << 16);
        v85 = a4[4] & 4LL;
        if ( (a4[4] & 3) != 0 )
        {
          if ( (a4[4] & 3LL) == 2 )
            v86 = (((unsigned __int128)-(__int128)(unsigned __int64)v85 >> 64) & 4) + 2;
          else
            v86 = (((unsigned __int128)-(__int128)(unsigned __int64)v85 >> 64) & 4) + 1;
        }
        else
        {
          v86 = v85 != 0 ? 4 : 0;
        }
        v87 = v84 & 0xFFFFFFFFFF0FFFFFuLL | (v86 << 20);
        v88 = a4[5] & 4LL;
        if ( (a4[5] & 3) != 0 )
        {
          if ( (a4[5] & 3LL) == 2 )
            v89 = v88 != 0 ? 6LL : 2LL;
          else
            v89 = v88 != 0 ? 5LL : 1LL;
        }
        else
        {
          v89 = v88 != 0 ? 4 : 0;
        }
        v90 = v87 & 0xFFFFFFFFF0FFFFFFuLL | (v89 << 24);
        v91 = *a4 & 4LL;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
            v92 = v91 != 0 ? 6LL : 2LL;
          else
            v92 = v91 != 0 ? 5LL : 1LL;
        }
        else
        {
          v92 = v91 != 0 ? 4 : 0;
        }
        v93 = v90 & 0xFFFFFFFF0FFFFFFFuLL | (v92 << 28);
        v94 = a4[1] & 4LL;
        if ( (a4[1] & 3) != 0 )
        {
          if ( (a4[1] & 3LL) == 2 )
            v95 = (((unsigned __int128)-(__int128)(unsigned __int64)v94 >> 64) & 4) + 2;
          else
            v95 = (((unsigned __int128)-(__int128)(unsigned __int64)v94 >> 64) & 4) + 1;
        }
        else
        {
          v95 = v94 != 0 ? 4 : 0;
        }
        v65 = v93 & 0xFFFFFFF0FFFFFFFFuLL | (v95 << 32);
        v96 = a4[2] & 4LL;
        v63 = 0xFFFFF0FFFFFFFFFFuLL;
        if ( (a4[2] & 3) != 0 )
        {
          if ( (a4[2] & 3LL) == 2 )
            v97 = v96 != 0 ? 6LL : 2LL;
          else
            v97 = v96 != 0 ? 5LL : 1LL;
          v122 = v65 & 0xFFFFF0FFFFFFFFFFuLL | (v97 << 40);
          goto LABEL_248;
        }
        v66 = (unsigned __int64)(v96 != 0 ? 4 : 0) << 40;
LABEL_134:
        v67 = v63 & v65 | v66;
LABEL_141:
        v122 = v67;
        goto LABEL_248;
      }
      v75 = v74 - 1;
      if ( v75 )
      {
        v76 = v75 - 1;
        if ( v76 )
        {
          if ( v76 != 1 )
            goto LABEL_250;
          if ( v6 )
          {
            v121 &= 0xFFFFFFFFFFFF0FFFuLL;
            goto LABEL_248;
          }
          if ( a5 != 8 )
            goto LABEL_113;
          v77 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
              v30 = v77 != 0 ? 24576LL : 0x2000LL;
            else
              v30 = v77 != 0 ? 20480LL : 4096LL;
          }
          else
          {
            v30 = (unsigned __int64)(v77 != 0 ? 4 : 0) << 12;
          }
          v31 = v121 & 0xFFFFFFFFFFFF0FFFuLL;
        }
        else
        {
          if ( v6 )
          {
            v121 &= 0xFFFFFFFFFFFFFF0FuLL;
            goto LABEL_248;
          }
          if ( a5 != 8 )
            goto LABEL_113;
          v78 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v30 = v78 != 0 ? 96LL : 32LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v30 = v78 != 0 ? 112LL : 48LL;
            }
            else
            {
              v30 = v78 != 0 ? 80LL : 16LL;
            }
          }
          else
          {
            v30 = 16LL * (v78 != 0 ? 4 : 0);
          }
          v31 = v121 & 0xFFFFFFFFFFFFFF0FuLL;
        }
        goto LABEL_246;
      }
      if ( v6 )
      {
        v122 &= 0xFFFFFF0FFFFFFFFFuLL;
        goto LABEL_248;
      }
      if ( a5 != 8 )
        goto LABEL_113;
      v79 = *a4 & 4LL;
      if ( (*a4 & 3) != 0 )
      {
        if ( (*a4 & 3LL) != 2 )
        {
          v69 = 0xFFFFFF0FFFFFFFFFuLL;
          if ( (*(_BYTE *)a4 & 8) != 0 )
            v81 = v79 != 0 ? 7LL : 3LL;
          else
            v81 = v79 != 0 ? 5LL : 1LL;
          v23 = v81 << 36;
          goto LABEL_139;
        }
        v80 = v79 != 0 ? 6LL : 2LL;
      }
      else
      {
        v80 = v79 != 0 ? 4 : 0;
      }
      v23 = v80 << 36;
      v69 = 0xFFFFFF0FFFFFFFFFuLL;
    }
    else
    {
      if ( a2 != 8 )
      {
        if ( !a2 )
        {
          if ( v6 )
          {
            v121 &= 0xFFFFFFFFFFFFFFF0uLL;
            goto LABEL_248;
          }
          if ( a5 != 8 )
            goto LABEL_113;
          v58 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v30 = v58 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v30 = v58 != 0 ? 7LL : 3LL;
            }
            else
            {
              v30 = v58 != 0 ? 5LL : 1LL;
            }
            v31 = v121 & 0xFFFFFFFFFFFFFFF0uLL;
          }
          else
          {
            v30 = v121 & 0xFFFFFFFFFFFFFFF0uLL;
            v31 = v58 != 0 ? 4 : 0;
          }
          goto LABEL_246;
        }
        v15 = a2 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( !v17 )
            {
              if ( v6 )
              {
                v121 &= 0xFFFFFFFFF0FFFFFFuLL;
                goto LABEL_248;
              }
              if ( a5 != 8 )
                goto LABEL_113;
              v36 = *a4 & 4LL;
              if ( (*a4 & 3) != 0 )
              {
                if ( (*a4 & 3LL) == 2 )
                  v37 = v36 != 0 ? 6LL : 2LL;
                else
                  v37 = v36 != 0 ? 5LL : 1LL;
              }
              else
              {
                v37 = v36 != 0 ? 4 : 0;
              }
              v30 = v37 << 24;
              v31 = v121 & 0xFFFFFFFFF0FFFFFFuLL;
              goto LABEL_246;
            }
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 2;
              if ( v19 )
              {
                if ( v19 != 1 )
                  goto LABEL_250;
                if ( v6 )
                {
                  v121 &= 0xFFFFF0FFFFFFFFFFuLL;
                  v122 &= 0xFFFFFFFFFFFFF0FFuLL;
LABEL_248:
                  v13 = ZwSetValueKey();
                  goto LABEL_249;
                }
                if ( a5 == 16 )
                {
                  v20 = a4[1];
                  v21 = v20 & 4;
                  v22 = *a4 & 4LL;
                  if ( (*a4 & 3) != 0 )
                  {
                    if ( (*a4 & 3LL) == 2 )
                    {
                      v121 = v121 & 0xFFFFF0FFFFFFFFFFuLL | ((v22 != 0 ? 6LL : 2LL) << 40);
LABEL_37:
                      v23 = v21 != 0 ? 1536LL : 512LL;
LABEL_43:
                      v26 = v122;
LABEL_47:
                      v27 = v26 & 0xFFFFFFFFFFFFF0FFuLL;
LABEL_140:
                      v67 = v27 | v23;
                      goto LABEL_141;
                    }
                    if ( (*(_BYTE *)a4 & 8) != 0 )
                      v24 = v22 != 0 ? 7LL : 3LL;
                    else
                      v24 = v22 != 0 ? 5LL : 1LL;
                    v121 = v121 & 0xFFFFF0FFFFFFFFFFuLL | (v24 << 40);
                    v25 = v20 & 3;
                    if ( v25 )
                    {
                      v26 = v122;
                      if ( v25 == 2LL )
                        v23 = v21 != 0 ? 1536LL : 512LL;
                      else
                        v23 = v21 != 0 ? 1280LL : 256LL;
                      goto LABEL_47;
                    }
                  }
                  else
                  {
                    v121 = v121 & 0xFFFFF0FFFFFFFFFFuLL | ((unsigned __int64)(v22 != 0 ? 4 : 0) << 40);
                    if ( (v20 & 3) == 2 )
                      goto LABEL_37;
                  }
                  v23 = (unsigned __int64)(v21 != 0 ? 4 : 0) << 8;
                  goto LABEL_43;
                }
LABEL_113:
                inited = -1073741811;
                goto LABEL_250;
              }
              if ( v6 )
              {
                v121 &= 0xFFFFFFF0FFFFFFFFuLL;
                goto LABEL_248;
              }
              if ( a5 != 8 )
                goto LABEL_113;
              v28 = *a4 & 4LL;
              if ( (*a4 & 3) != 0 )
              {
                if ( (*a4 & 3LL) == 2 )
                  v29 = v28 != 0 ? 6LL : 2LL;
                else
                  v29 = v28 != 0 ? 5LL : 1LL;
              }
              else
              {
                v29 = v28 != 0 ? 4 : 0;
              }
              v30 = v29 << 32;
              v31 = v121 & 0xFFFFFFF0FFFFFFFFuLL;
              goto LABEL_246;
            }
            if ( v6 )
            {
              v32 = 0xFFFFFFFF0FFFFFFFuLL;
LABEL_235:
              v121 &= v32;
              goto LABEL_248;
            }
            if ( a5 != 8 )
              goto LABEL_113;
            v33 = 0xFFFFFFFF0FFFFFFFuLL;
            v34 = *a4 & 4LL;
            if ( (*a4 & 3) != 0 )
            {
              if ( (*a4 & 3LL) == 2 )
                v35 = v34 != 0 ? 6LL : 2LL;
              else
                v35 = v34 != 0 ? 5LL : 1LL;
            }
            else
            {
              v35 = v34 != 0 ? 4 : 0;
            }
            v30 = v35 << 28;
            goto LABEL_245;
          }
          if ( v6 )
          {
            v32 = 0xFFFFFF0FFFFFFFFFuLL;
            goto LABEL_235;
          }
          if ( a5 != 8 )
            goto LABEL_113;
          v38 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) != 2 )
            {
              v33 = 0xFFFFFF0FFFFFFFFFuLL;
              if ( (*(_BYTE *)a4 & 8) != 0 )
                v40 = v38 != 0 ? 7LL : 3LL;
              else
                v40 = v38 != 0 ? 5LL : 1LL;
              v30 = v40 << 36;
              goto LABEL_245;
            }
            v39 = v38 != 0 ? 6LL : 2LL;
          }
          else
          {
            v39 = v38 != 0 ? 4 : 0;
          }
          v30 = v39 << 36;
          v33 = 0xFFFFFF0FFFFFFFFFuLL;
LABEL_245:
          v31 = v33 & v121;
LABEL_246:
          v54 = v31 | v30;
          goto LABEL_247;
        }
        if ( v6 )
        {
          v121 &= 0xFFFFFFFFFF00F0FFuLL;
          goto LABEL_248;
        }
        if ( a5 != 24 )
          goto LABEL_113;
        v41 = a4[1];
        v42 = a4[2];
        v43 = v41 & 4;
        v44 = v42 & 4;
        v45 = *a4 & 4LL;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
          {
            v46 = v45 != 0 ? 1536LL : 512LL;
          }
          else if ( (*(_BYTE *)a4 & 8) != 0 )
          {
            v46 = v45 != 0 ? 1792LL : 768LL;
          }
          else
          {
            v46 = v45 != 0 ? 1280LL : 256LL;
          }
        }
        else
        {
          v46 = (unsigned __int64)(v45 != 0 ? 4 : 0) << 8;
        }
        v47 = v121 & 0xFFFFFFFFFFFFF0FFuLL | v46;
        v48 = v41 & 3;
        if ( v48 )
        {
          if ( v48 == 2LL )
            v49 = v43 != 0 ? 6LL : 2LL;
          else
            v49 = v43 != 0 ? 5LL : 1LL;
        }
        else
        {
          v49 = v43 != 0 ? 4 : 0;
        }
        v50 = v47 & 0xFFFFFFFFFFF0FFFFuLL | (v49 << 16);
        v51 = v42 & 3;
        if ( !v51 )
        {
          v52 = (unsigned __int64)(v44 != 0 ? 4 : 0) << 20;
          v53 = v50 & 0xFFFFFFFFFF0FFFFFuLL;
LABEL_104:
          v54 = v53 | v52;
LABEL_247:
          v121 = v54;
          goto LABEL_248;
        }
        if ( v51 == 2LL )
          v55 = v44 != 0 ? 6LL : 2LL;
        else
          v55 = v44 != 0 ? 5LL : 1LL;
        v56 = v55 << 20;
        v57 = v50 & 0xFFFFFFFFFF0FFFFFuLL;
        goto LABEL_109;
      }
      if ( v6 )
      {
        v121 &= 0xFFFF0FFFFFFFFFFFuLL;
        goto LABEL_248;
      }
      if ( a5 != 16 )
        goto LABEL_113;
      v59 = a4[1];
      v60 = v59 & 4;
      v61 = *a4 & 4LL;
      if ( (*a4 & 3) != 0 )
      {
        if ( (*a4 & 3LL) == 2 )
        {
          v62 = v61 != 0 ? 6LL : 2LL;
        }
        else if ( (*(_BYTE *)a4 & 8) != 0 )
        {
          v62 = v61 != 0 ? 7LL : 3LL;
        }
        else
        {
          v62 = v61 != 0 ? 5LL : 1LL;
        }
      }
      else
      {
        v62 = v61 != 0 ? 4 : 0;
      }
      v63 = 0xFFFF0FFFFFFFFFFFuLL;
      v121 = v121 & 0xFFFF0FFFFFFFFFFFuLL | (v62 << 44);
      v64 = v59 & 3;
      if ( !v64 )
      {
        v65 = v122 & 0xFFFFFFFFFFFFFF0FuLL | (16LL * (v60 != 0 ? 4 : 0));
        v66 = (unsigned __int64)(v60 != 0 ? 4 : 0) << 44;
        goto LABEL_134;
      }
      v68 = v64 == 2LL;
      v69 = 0xFFFF0FFFFFFFFF0FuLL;
      if ( v68 )
      {
        v70 = (v60 != 0 ? 6LL : 2LL) << 44;
        v71 = v60 != 0 ? 96LL : 32LL;
      }
      else
      {
        v70 = (v60 != 0 ? 5LL : 1LL) << 44;
        v71 = v60 != 0 ? 80LL : 16LL;
      }
      v23 = v71 & 0xFFFF0FFFFFFFFFFFuLL | v70;
    }
LABEL_139:
    v27 = v69 & v122;
    goto LABEL_140;
  }
LABEL_252:
  if ( inited == -1073741772 && v5 )
    return 0;
  return (unsigned int)inited;
}
