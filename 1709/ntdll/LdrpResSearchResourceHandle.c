/*
 * XREFs of LdrpResSearchResourceHandle @ 0x1800E3210
 * Callers:
 *     LdrResSearchResource @ 0x18001D400 (LdrResSearchResource.c)
 * Callees:
 *     LdrpResSearchResourceInsideDirectory @ 0x18001E394 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x18001FCD4 (LdrResFallbackLangList.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLcidToLocaleName @ 0x180051F50 (RtlLcidToLocaleName.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 *     LdrpResFileSize @ 0x1800E2C88 (LdrpResFileSize.c)
 *     LdrpResReadFile @ 0x1800E3164 (LdrpResReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800E38FC (LdrpResSetFilePointer.c)
 */

int __fastcall LdrpResSearchResourceHandle(
        char *Handle,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        void *a7,
        __int64 a8)
{
  __int16 v8; // di
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rcx
  int v14; // edi
  int result; // eax
  int File; // edi
  PVOID Heap; // rax
  unsigned int v18; // ebx
  int v19; // ecx
  unsigned __int16 v20; // cx
  unsigned int v21; // r14d
  ULONG v22; // edi
  _DWORD *v23; // rbx
  int v24; // edx
  unsigned int v25; // ecx
  unsigned __int64 v26; // r15
  char *v27; // r14
  _DWORD *v28; // r15
  __int64 v29; // r14
  int v30; // [rsp+70h] [rbp-4C8h]
  unsigned __int16 v31; // [rsp+74h] [rbp-4C4h] BYREF
  _QWORD v32[2]; // [rsp+78h] [rbp-4C0h] BYREF
  unsigned int v33; // [rsp+88h] [rbp-4B0h]
  int v34; // [rsp+8Ch] [rbp-4ACh]
  int v35; // [rsp+90h] [rbp-4A8h]
  __int64 v36; // [rsp+98h] [rbp-4A0h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-498h]
  void *v38; // [rsp+A8h] [rbp-490h]
  char *v39; // [rsp+B0h] [rbp-488h]
  unsigned __int64 *v40; // [rsp+B8h] [rbp-480h]
  unsigned __int64 *v41; // [rsp+C0h] [rbp-478h]
  __int64 v42; // [rsp+C8h] [rbp-470h]
  int v43; // [rsp+D0h] [rbp-468h] BYREF
  const wchar_t *v44; // [rsp+D8h] [rbp-460h]
  _UNICODE_STRING LocaleName; // [rsp+E0h] [rbp-458h] BYREF
  int v46; // [rsp+F0h] [rbp-448h] BYREF
  __int16 v47; // [rsp+F4h] [rbp-444h]
  unsigned __int16 v48; // [rsp+F6h] [rbp-442h]
  unsigned __int16 v49; // [rsp+104h] [rbp-434h]
  __int16 v50; // [rsp+108h] [rbp-430h]
  unsigned int v51; // [rsp+164h] [rbp-3D4h]
  unsigned int v52; // [rsp+174h] [rbp-3C4h]
  unsigned int v53; // [rsp+178h] [rbp-3C0h]
  int v54; // [rsp+17Ch] [rbp-3BCh]
  unsigned int v55; // [rsp+188h] [rbp-3B0h]
  int v56; // [rsp+18Ch] [rbp-3ACh]
  _WORD v57[30]; // [rsp+200h] [rbp-338h] BYREF
  unsigned int v58; // [rsp+23Ch] [rbp-2FCh]
  unsigned __int16 v59[264]; // [rsp+240h] [rbp-2F8h] BYREF
  _WORD Src[88]; // [rsp+450h] [rbp-E8h] BYREF

  v34 = a4;
  v37 = a3;
  v8 = a2;
  v33 = a2;
  v39 = Handle;
  v41 = a5;
  v40 = a6;
  v38 = a7;
  v42 = a8;
  LODWORD(v32[0]) = 4456514;
  v32[1] = L"LdrpResSearchResourceHandle Enter";
  v43 = 4325440;
  v44 = L"LdrpResSearchResourceHandle Exit";
  memset(Src, 0, 0xACuLL);
  v10 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v32, *(unsigned __int8 *)v13);
  }
  else
  {
    v12 = 2147353476LL;
  }
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    File = -1073741811;
    goto LABEL_16;
  }
  v14 = v8 & 0x1000;
  v35 = v14;
  result = LdrpResFileSize(Handle, &v36);
  if ( result < 0 && v14 )
    return result;
  result = LdrpResReadFile(Handle, 0LL, v57, 0x40u);
  if ( result < 0 )
    return result;
  if ( v57[0] == 23117 )
  {
    v18 = v58;
    if ( v14
      && ((unsigned __int64)v58 + 264 < v58
       || v58 > 0x10000000
       || v58 + 264 < v58
       || (unsigned __int64)v58 + 264 >= (unsigned int)v36) )
    {
      goto LABEL_19;
    }
    result = LdrpResReadFile(Handle, v58, &v46, 0x108u);
    if ( result < 0 )
      return result;
    if ( v46 != 17744 )
      goto LABEL_19;
    if ( v50 == 267 )
    {
      if ( v47 != 332 )
      {
        if ( (unsigned __int16)(v47 - 448) > 4u )
          goto LABEL_19;
        v19 = 21;
        if ( !_bittest(&v19, (unsigned __int16)(v47 - 448)) )
          goto LABEL_19;
      }
      if ( v51 > 2 && v54 )
      {
        v20 = v49;
        if ( v49 >= 0x78u )
        {
          v21 = v53;
          goto LABEL_35;
        }
        goto LABEL_19;
      }
    }
    else
    {
      if ( v50 != 523 || v47 != 512 && v47 != -31132 )
        goto LABEL_19;
      if ( v52 > 2 && v56 )
      {
        v20 = v49;
        if ( v49 >= 0x88u )
        {
          v21 = v55;
LABEL_35:
          if ( !v21 )
            return -1073741687;
          if ( v48 )
          {
            v22 = 40 * v48;
            if ( v18 + v22 + v20 + 24 <= (unsigned int)v36 )
            {
              Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v22);
              v32[0] = Heap;
              if ( !Heap )
              {
                File = -1073741801;
                v30 = -1073741801;
                goto LABEL_75;
              }
              File = LdrpResReadFile(Handle, v18 + v49 + 24, Heap, v22);
              v30 = File;
              if ( File >= 0 )
              {
                v23 = (_DWORD *)v32[0];
                v24 = 0;
                if ( v48 )
                {
                  do
                  {
                    v25 = v23[3];
                    if ( v21 >= v25 && v21 < v23[4] + v25 )
                      break;
                    v23 += 10;
                    ++v24;
                  }
                  while ( v24 < v48 );
                }
                if ( v24 < v48 && (v26 = v21 + (unsigned int)v23[5] - (unsigned __int64)(unsigned int)v23[3]) != 0 )
                {
                  v27 = v39;
                  File = LdrpResSetFilePointer(v39, v26);
                  v30 = File;
                  if ( File >= 0 )
                  {
                    if ( v34 == 3 )
                    {
                      v59[0] = 0;
                      if ( (v33 & 0x20) != 0 )
                      {
                        v59[0] = 1;
                        v59[2] = 0;
                      }
                      else
                      {
                        File = LdrResFallbackLangList(0LL, 0, *(_WORD *)(v37 + 16), v33, v59);
                        v30 = File;
                        if ( File < 0 && v35 )
                          goto LABEL_74;
                      }
                    }
                    v31 = 0;
                    File = LdrpResSearchResourceInsideDirectory(
                             0LL,
                             v27,
                             (unsigned int)v36,
                             v26,
                             (__int64)&v46,
                             (__int64)v23,
                             v37,
                             v34,
                             (__int64)v59,
                             v41,
                             v40,
                             v33,
                             &v31);
                    v30 = File;
                    if ( File >= 0 )
                    {
                      v28 = (_DWORD *)v42;
                      if ( v42 )
                      {
                        if ( !v31 )
                        {
                          Src[0] = 0;
                          LODWORD(v29) = 0;
                          goto LABEL_69;
                        }
                        LocaleName.Buffer = Src;
                        LocaleName.MaximumLength = 172;
                        File = RtlLcidToLocaleName(v31, &LocaleName, 2u, 0);
                        v30 = File;
                        if ( File >= 0 )
                        {
                          v29 = -1LL;
                          do
                            ++v29;
                          while ( Src[v29] );
LABEL_69:
                          if ( (unsigned int)v29 < *v28 && v38 )
                          {
                            memmove(v38, Src, 2LL * (unsigned int)v29);
                            *v28 = v29 + 1;
                            *((_WORD *)v38 + (unsigned int)v29) = 0;
                            Heap = (PVOID)v32[0];
                          }
                          else
                          {
                            *v28 = v29 + 1;
                            File = -1073741789;
                            v30 = -1073741789;
                            Heap = (PVOID)v32[0];
                          }
                          goto LABEL_75;
                        }
                      }
                    }
                  }
                }
                else
                {
                  File = -1073741701;
                  v30 = -1073741701;
                }
              }
LABEL_74:
              Heap = (PVOID)v32[0];
              goto LABEL_75;
            }
          }
        }
LABEL_19:
        File = -1073741701;
LABEL_20:
        v30 = File;
        Heap = 0LL;
        goto LABEL_75;
      }
    }
    File = -1073741687;
    goto LABEL_20;
  }
  File = -1073741701;
LABEL_16:
  v30 = File;
  Heap = 0LL;
LABEL_75:
  if ( Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    File = v30;
  }
  if ( RtlGetCurrentServiceSessionId() )
  {
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    File = v30;
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      File = v30;
    }
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v43, *(unsigned __int8 *)v12);
  }
  return File;
}
