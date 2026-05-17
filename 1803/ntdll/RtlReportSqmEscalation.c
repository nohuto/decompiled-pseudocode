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

__int64 __fastcall RtlReportSqmEscalation(int a1, int a2, int a3, __int64 a4, _DWORD *a5)
{
  __int64 v7; // r14
  unsigned int UniqueProcess; // r15d
  unsigned int UniqueThread; // r12d
  unsigned int Section; // edi
  int v12; // eax
  int v13; // eax
  _OWORD v16[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v17[176]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v18[176]; // [rsp+630h] [rbp+530h] BYREF

  memset(v18, 0, 0x578uLL);
  memset(v17, 0, 0x578uLL);
  memset(v16, 0, sizeof(v16));
  v7 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  UniqueProcess = (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = (unsigned int)NtCurrentTeb()->ClientId.UniqueThread;
  if ( !a5 )
  {
    memset(v18, 0, 0x578uLL);
    HIDWORD(v18[8]) = a2;
    LODWORD(v18[9]) = a3;
    v18[10] = 0LL;
    LODWORD(v18[0]) = 91751760;
    LODWORD(v18[5]) = 0x40000000;
    v18[6] = __PAIR64__(UniqueThread, UniqueProcess);
    LODWORD(v18[7]) = a1;
    *(_QWORD *)((char *)&v18[7] + 4) = a4;
    memset(v17, 0, 0x578uLL);
    LODWORD(v17[0]) = 91751760;
    v12 = sub_1800D7658(v18, v17);
    if ( v12 >= 0 )
    {
      if ( v12 == 258 )
      {
        Section = -1073741248;
      }
      else
      {
        v7 = v17[6];
        if ( v17[6] )
        {
          while ( 1 )
          {
            v13 = ZwWaitForSingleObject();
            Section = v13;
            if ( v13 < 0 || v13 == 258 )
              break;
            if ( v13 != 192 && v13 != 257 )
              goto LABEL_17;
          }
        }
        else
        {
LABEL_17:
          Section = 0;
        }
      }
    }
    else
    {
      Section = -1073741823;
    }
    goto LABEL_18;
  }
  if ( *a5 == 3468 && a5[1] <= 0xAu )
  {
    *((_QWORD *)&v16[0] + 1) = 0LL;
    DWORD2(v16[1]) = 0;
    *(_QWORD *)&v16[1] = 0LL;
    v16[2] = 0LL;
    LODWORD(v16[0]) = 48;
    Section = ZwCreateSection();
LABEL_18:
    if ( v7 )
      ZwClose();
    return Section;
  }
  return (unsigned int)-1073741811;
}
