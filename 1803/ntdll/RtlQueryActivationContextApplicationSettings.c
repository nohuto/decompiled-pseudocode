/*
 * XREFs of RtlQueryActivationContextApplicationSettings @ 0x18007BAE0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     sub_180028FE8 @ 0x180028FE8 (sub_180028FE8.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18003EC30 @ 0x18003EC30 (sub_18003EC30.c)
 *     sub_18003F160 @ 0x18003F160 (sub_18003F160.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __cdecl RtlQueryActivationContextApplicationSettings(
        ULONG Flags,
        PACTIVATION_CONTEXT ActivationContext,
        PWSTR SettingsNameSpace,
        PWSTR SettingName,
        PWSTR Buffer,
        SIZE_T BufferLength,
        PSIZE_T RequiredLength)
{
  PWSTR v7; // rsi
  NTSTATUS v9; // ebx
  ULONG v11; // edi
  _DWORD *v12; // rbx
  __int64 v13; // rdi
  char *v14; // rax
  signed __int64 v15; // rsi
  int v16; // edx
  int v17; // ecx
  int v18; // [rsp+40h] [rbp-61h] BYREF
  char *v19; // [rsp+48h] [rbp-59h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v21[14]; // [rsp+60h] [rbp-41h] BYREF
  ULONG v22; // [rsp+100h] [rbp+5Fh] BYREF

  v19 = 0LL;
  v7 = L"http://schemas.microsoft.com/SMI/2005/WindowsSettings";
  v22 = 0;
  v18 = -1;
  if ( SettingsNameSpace )
    v7 = SettingsNameSpace;
  if ( !Buffer && BufferLength )
    return -1073741811;
  v9 = sub_180028FE8(1, (__int64)ActivationContext, 0LL, (const char **)&v19);
  if ( v9 >= 0 )
  {
    v9 = sub_18003F160(v19, 0LL, 0xAu, &DestinationString, &v22);
    if ( v9 >= 0 )
    {
      v11 = v22;
      v12 = *(_DWORD **)&DestinationString.Length;
      if ( v22 >= 0x2C && **(_DWORD **)&DestinationString.Length == 1682469715 )
      {
        RtlInitUnicodeString(&DestinationString, SettingName);
        memset(v21, 0, sizeof(v21));
        LODWORD(v21[0]) = 112;
        v9 = sub_18003EC30(v12, v11, &DestinationString, (unsigned int *)v21, &v18, &v22);
        if ( v9 >= 0 )
        {
          if ( HIDWORD(v21[0]) != 1 )
            return -1072365565;
          v13 = v21[1];
          v14 = (char *)(v21[1] + *(unsigned int *)(v21[1] + 12LL));
          v15 = (char *)v7 - v14;
          do
          {
            v16 = *(unsigned __int16 *)&v14[v15];
            v17 = *(unsigned __int16 *)v14 - v16;
            if ( v17 )
              break;
            v14 += 2;
          }
          while ( v16 );
          if ( v17 )
            return -1072365560;
          if ( BufferLength < (unsigned __int64)*(unsigned int *)(v21[1] + 24LL) >> 1 )
            v9 = -1073741789;
          else
            memmove(
              Buffer,
              (const void *)(v21[1] + *(unsigned int *)(v21[1] + 28LL)),
              *(unsigned int *)(v21[1] + 24LL) + 2LL);
          if ( RequiredLength )
            *RequiredLength = ((unsigned __int64)*(unsigned int *)(v13 + 24) >> 1) + 1;
        }
      }
      else
      {
        DbgPrintEx(
          0x33u,
          0,
          "RtlpLocateActivationContextSection() found section at %p (length %lu) which is not a string section\n",
          *(const void **)&DestinationString.Length,
          v22);
        v9 = -1072365565;
      }
    }
  }
  if ( v9 == -1072365567 )
    return -1072365560;
  return v9;
}
