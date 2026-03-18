/*
 * XREFs of NtGdiColorCorrectPalette @ 0x1C0294B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C00963F4 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C009FD28 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C0299400 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall NtGdiColorCorrectPalette(
        HDC a1,
        HPALETTE a2,
        unsigned int a3,
        unsigned int a4,
        struct tagPALETTEENTRY *Address,
        int a6)
{
  __int64 v6; // rdi
  unsigned int Entries; // ebx
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v13; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF

  v6 = a4;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v13, a2);
  Entries = 0;
  if ( !v14[0] || !v13 )
    goto LABEL_21;
  if ( !(_DWORD)v6
    || (v10 = *(_DWORD *)(v13 + 28), (unsigned int)v6 > v10)
    || (unsigned int)v6 > 0x3FFFFFFF
    || a3 > v10
    || a3 + (unsigned int)v6 > v10 )
  {
    EngSetLastError(0x57u);
    DEC_SHARE_REF_CNT(v13);
    DCOBJ::~DCOBJ((DCOBJ *)v14);
    return 0LL;
  }
  if ( (*(_DWORD *)(v14[0] + 112LL) & 1) != 0 )
  {
    if ( a6 )
    {
      if ( a6 == 1 )
      {
        v11 = v6;
        if ( 4 * v6 )
        {
          if ( ((unsigned __int8)Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&Address[v11] > W32UserProbeAddress || &Address[v11] < Address )
            *W32UserProbeAddress = 0;
        }
        Entries = XEPALOBJ::ulSetEntries((XEPALOBJ *)&v13, a3, v6, Address);
      }
    }
    else
    {
      ProbeForWrite(Address, 4LL * (unsigned int)v6, 4u);
      Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)&v13, a3, v6, Address, 0);
    }
  }
  else
  {
LABEL_21:
    EngSetLastError(0x57u);
  }
  if ( v13 )
    DEC_SHARE_REF_CNT(v13);
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return Entries;
}
