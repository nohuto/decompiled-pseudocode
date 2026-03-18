/*
 * XREFs of ?bCreateSectionFromHandle@@YAHPEAXPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00B6768
 * Callers:
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00B65D8 (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00C1D80 (-bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z.c)
 * Callees:
 *     ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C00B6A4C (-bIsFileInSystemFontsDir@@YAHPEAX@Z.c)
 *     ZwWin32CreateSection @ 0x1C00B6B6C (ZwWin32CreateSection.c)
 *     ?TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z @ 0x1C00B6C60 (-TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C011FBF4 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C0268B70 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 */

__int64 __fastcall bCreateSectionFromHandle(
        void *a1,
        PCWSTR SourceString,
        struct _FILEVIEW *a3,
        int a4,
        int *a5,
        unsigned __int8 a6)
{
  const WCHAR *v6; // r15
  int v10; // edi
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  int v13; // edi
  __int128 v14; // xmm0
  NTSTATUS v15; // eax
  void *v16; // rcx
  int v17; // edx
  int v18; // edi
  wchar_t *v19; // rax
  const wchar_t *v20; // r15
  NTSTATUS v21; // r13d
  LONG HighPart; // eax
  DWORD LowPart; // ecx
  int Section; // eax
  __int64 result; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  DWORD v30; // eax
  int v31; // [rsp+28h] [rbp-D8h]
  void *v32; // [rsp+38h] [rbp-C8h]
  bool v33; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v34[2]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v35[5]; // [rsp+60h] [rbp-A0h] BYREF
  PCWSTR v36; // [rsp+B0h] [rbp-50h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v38; // [rsp+C8h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  char FileInformation[8]; // [rsp+108h] [rbp+8h] BYREF
  union _LARGE_INTEGER v41; // [rsp+110h] [rbp+10h] BYREF
  char v42[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v43; // [rsp+130h] [rbp+30h]

  v6 = SourceString;
  v36 = SourceString;
  memset(v35, 0, sizeof(v35));
  v10 = DWORD2(v35[2]);
  v11 = v35[1];
  *(_OWORD *)a3 = v35[0];
  *((_OWORD *)a3 + 1) = v11;
  v12 = v35[3];
  v13 = ((unsigned __int8)v10 ^ (unsigned __int8)(8 * a6)) & 8 ^ v10;
  DWORD2(v35[2]) = v13;
  *((_OWORD *)a3 + 2) = v35[2];
  v14 = v35[4];
  *((_OWORD *)a3 + 3) = v12;
  *((_OWORD *)a3 + 4) = v14;
  RtlInitUnicodeString(&DestinationString, v6);
  *(_QWORD *)&v35[3] = a1;
  if ( !a1 )
    return 0LL;
  v15 = ZwQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  v16 = a1;
  if ( v15 >= 0 )
  {
    if ( ZwQueryInformationFile(a1, &IoStatusBlock, v42, 0x28u, FileBasicInformation) < 0 )
      goto LABEL_29;
    v18 = v13 | 1;
    *(_QWORD *)&v35[0] = v43;
    DWORD2(v35[2]) = v18;
    if ( !a5 )
    {
LABEL_11:
      if ( !a4 )
      {
        HighPart = v41.HighPart;
        LowPart = v41.LowPart;
        goto LABEL_13;
      }
      v30 = v41.LowPart;
      if ( a4 > 0 )
        v30 = a4;
      v34[1] = 0;
      v34[0] = v30;
      if ( ZwSetInformationFile(a1, &IoStatusBlock, v34, 8u, FileEndOfFileInformation) >= 0 )
      {
        LowPart = v34[0];
        HighPart = 0;
        v41.QuadPart = v34[0];
LABEL_13:
        if ( !HighPart )
        {
          DWORD2(v35[1]) = LowPart;
          if ( (v18 & 8) != 0 )
            goto LABEL_17;
          if ( (int)TryGetFileDeviceRemoteBit(a1, &v33) >= 0 )
          {
            v18 ^= ((unsigned __int8)v18 ^ (unsigned __int8)(2 * v33)) & 2;
            DWORD2(v35[2]) = v18;
LABEL_17:
            v38.RootDirectory = 0LL;
            v38.ObjectName = 0LL;
            v38.Length = 48;
            v38.Attributes = 512;
            *(_OWORD *)&v38.SecurityDescriptor = 0LL;
            if ( (v18 & 2) != 0 )
              Section = ObtainSectionForNetworkedFontFile(
                          &DestinationString,
                          (struct _FILEVIEW *)v35,
                          &v38,
                          &v41,
                          a4 != 0);
            else
              Section = ZwWin32CreateSection(
                          (int)&v35[2],
                          v17,
                          (int)&v38,
                          (int)&v41,
                          a4 != 0 ? 4 : 2,
                          v31,
                          (__int64)a1,
                          v32);
            v16 = *(void **)&v35[3];
            if ( Section >= 0 )
            {
              if ( (unsigned int)bIsFileInSystemFontsDir(*(void **)&v35[3]) )
              {
                DWORD2(v35[2]) |= 0x10u;
LABEL_22:
                result = 1LL;
                v26 = v35[1];
                *(_OWORD *)a3 = v35[0];
                v27 = v35[2];
                *((_OWORD *)a3 + 1) = v26;
                v28 = v35[3];
                *((_OWORD *)a3 + 2) = v27;
                v29 = v35[4];
                *((_OWORD *)a3 + 3) = v28;
                *((_OWORD *)a3 + 4) = v29;
                return result;
              }
              if ( (int)ScrutinizeFontLoad(0LL, v6) >= 0 )
                goto LABEL_22;
              v16 = *(void **)&v35[3];
            }
            goto LABEL_30;
          }
        }
      }
LABEL_29:
      v16 = a1;
      goto LABEL_30;
    }
    v19 = (wchar_t *)AllocFreeTmpBuffer(536LL);
    v20 = v19;
    v16 = a1;
    if ( v19 )
    {
      *a5 = 0;
      v21 = ZwQueryVolumeInformationFile(a1, &IoStatusBlock, v19, 0x218u, FileFsAttributeInformation);
      if ( v21 >= 0 && !_wcsnicmp(v20 + 6, L"FAT", 3uLL) )
        *a5 = 1;
      FreeTmpBuffer(v20);
      if ( v21 < 0 )
        goto LABEL_29;
      v6 = v36;
      goto LABEL_11;
    }
  }
LABEL_30:
  ZwClose(v16);
  return 0LL;
}
