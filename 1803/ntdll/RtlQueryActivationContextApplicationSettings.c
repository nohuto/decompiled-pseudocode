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

__int64 __fastcall RtlQueryActivationContextApplicationSettings(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        const WCHAR *a4,
        void *a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  const wchar_t *v7; // rsi
  int v9; // ebx
  unsigned int v11; // edi
  _DWORD *v12; // rbx
  __int64 v13; // rdi
  char *v14; // rax
  signed __int64 v15; // rsi
  int v16; // edx
  int v17; // ecx
  __int64 v18; // [rsp+20h] [rbp-81h]
  int v19; // [rsp+40h] [rbp-61h] BYREF
  char *v20; // [rsp+48h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v22[14]; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v23; // [rsp+100h] [rbp+5Fh] BYREF

  v20 = 0LL;
  v7 = L"http://schemas.microsoft.com/SMI/2005/WindowsSettings";
  v23 = 0;
  v19 = -1;
  if ( a3 )
    v7 = a3;
  if ( !a5 && a6 )
    return 3221225485LL;
  v9 = sub_180028FE8(1, a2, 0LL, (const char **)&v20);
  if ( v9 >= 0 )
  {
    v9 = sub_18003F160(v20, 0LL, 0xAu, &DestinationString, &v23);
    if ( v9 >= 0 )
    {
      v11 = v23;
      v12 = *(_DWORD **)&DestinationString.Length;
      if ( v23 >= 0x2C && **(_DWORD **)&DestinationString.Length == 1682469715 )
      {
        RtlInitUnicodeString(&DestinationString, a4);
        memset(v22, 0, sizeof(v22));
        LODWORD(v22[0]) = 112;
        v9 = sub_18003EC30(v12, v11, (unsigned __int16 **)&DestinationString, (unsigned int *)v22, &v19, &v23);
        if ( v9 >= 0 )
        {
          if ( HIDWORD(v22[0]) != 1 )
            return 3222601731LL;
          v13 = v22[1];
          v14 = (char *)(v22[1] + *(unsigned int *)(v22[1] + 12LL));
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
            return 3222601736LL;
          if ( a6 < (unsigned __int64)*(unsigned int *)(v22[1] + 24LL) >> 1 )
            v9 = -1073741789;
          else
            memmove(
              a5,
              (const void *)(v22[1] + *(unsigned int *)(v22[1] + 28LL)),
              *(unsigned int *)(v22[1] + 24LL) + 2LL);
          if ( a7 )
            *a7 = ((unsigned __int64)*(unsigned int *)(v13 + 24) >> 1) + 1;
        }
      }
      else
      {
        LODWORD(v18) = v23;
        DbgPrintEx(
          51,
          0,
          (int)"RtlpLocateActivationContextSection() found section at %p (length %lu) which is not a string section\n",
          *(_QWORD *)&DestinationString.Length,
          v18);
        v9 = -1072365565;
      }
    }
  }
  if ( v9 == -1072365567 )
    return (unsigned int)-1072365560;
  return (unsigned int)v9;
}
