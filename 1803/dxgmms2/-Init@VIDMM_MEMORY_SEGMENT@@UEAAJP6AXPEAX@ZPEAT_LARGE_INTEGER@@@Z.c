/*
 * XREFs of ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00B08E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ??0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1C00268CC (--0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ.c)
 *     ?BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C002691C (-BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z @ 0x1C0026964 (-Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007F130 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::Init(PHYSICAL_ADDRESS *this, void (*a2)(void *), union _LARGE_INTEGER *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  PHYSICAL_ADDRESS v7; // r8
  DWORD LowPart; // edx
  char v9; // al
  __int64 v10; // rdx
  PHYSICAL_ADDRESS v11; // rcx
  __int64 v12; // rax
  VIDMM_CPU_HOST_APERTURE *v14; // rax
  __int64 v15; // rcx
  VIDMM_CPU_HOST_APERTURE *v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  int v25; // ebp
  int v26; // edx
  __int64 v27; // r8
  char v28; // cl
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r8
  int v32; // edi
  int v33; // edi
  unsigned int v34; // esi
  __int64 v35; // rax
  VIDMM_CPU_HOST_APERTURE *QuadPart; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD SystemInformation[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v6 + 24) = this[2].LowPart;
    *(_QWORD *)(v6 + 32) = this;
  }
  v7 = this[1];
  LowPart = this[10].LowPart;
  if ( *(_DWORD *)(v7.QuadPart + 32) < 0x9006u )
  {
    LowPart &= ~0x10u;
    this[10].LowPart = LowPart;
  }
  if ( (LowPart & 0x10) != 0 || (v9 = 0, (*(_DWORD *)(*(_QWORD *)(v7.QuadPart + 24) + 300LL) & 8) != 0) )
    v9 = 1;
  v10 = LowPart | 0x10;
  BYTE2(this[59].u.LowPart) = v9;
  this[10].LowPart = v10;
  if ( (v10 & 0x40) != 0 )
  {
    v11.QuadPart = (unsigned int)(qword_1C0047470 - 0x800000);
    if ( this[8].QuadPart > (unsigned __int64)v11.QuadPart )
    {
      v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)((PHYSICAL_ADDRESS)v11.QuadPart, v10);
      *(_QWORD *)(v12 + 24) = 272LL;
      WdLogEvent5_WdAssertion(v12);
      return 3221225473LL;
    }
    *(_QWORD *)(v7.QuadPart + 7032) += this[6].QuadPart;
    LODWORD(v10) = this[10].LowPart;
  }
  this[26] = this[6];
  if ( (v10 & 0x2000) != 0 )
  {
    v14 = (VIDMM_CPU_HOST_APERTURE *)operator new[](0x48uLL, 0x35346956u, PagedPool);
    if ( v14 )
      v16 = VIDMM_CPU_HOST_APERTURE::VIDMM_CPU_HOST_APERTURE(v14);
    else
      v16 = 0LL;
    this[61].QuadPart = (LONGLONG)v16;
    if ( !v16 )
    {
      _InterlockedIncrement(&dword_1C0047680);
      v17 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v17 + 24) = 302LL;
      WdLogEvent5_WdLowResource(v17);
      return 3221225495LL;
    }
    v18 = VIDMM_CPU_HOST_APERTURE::Init(v16, (struct VIDMM_MEMORY_SEGMENT *)this, this[4].QuadPart, this[5].LowPart);
    v21 = v18;
    if ( v18 < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v22 + 24) = v21;
      WdLogEvent5_WdAssertion(v22);
      return (unsigned int)v21;
    }
  }
  v25 = VIDMM_SEGMENT::Init(this, a2, 0LL);
  if ( v25 >= 0 && (this[10].LowPart & 0x2000) != 0 )
  {
    if ( this[11].LowPart )
    {
      v23 = *(_QWORD *)(this[1].QuadPart + 24);
      v24 = *(unsigned int *)(v23 + 300);
      if ( (v24 & 0x8000) != 0 && (v24 & 0x10000) != 0 )
      {
        memset(SystemInformation, 0, sizeof(SystemInformation));
        if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, SystemInformation, 0x20u, 0LL) >= 0 )
        {
          if ( LODWORD(SystemInformation[3]) == 1 )
            goto LABEL_31;
          if ( LODWORD(SystemInformation[3]) == 2 )
          {
LABEL_30:
            v26 = 4;
LABEL_32:
            v27 = this[47].LowPart;
            v28 = 12;
            if ( v27 != 4096 )
              v28 = 16;
            v29 = SystemInformation[0] >> v28;
            v30 = (unsigned int)(LODWORD(SystemInformation[2]) * HIDWORD(SystemInformation[1]) * v26);
            LOBYTE(v3) = ((v27 - 1) & v30) != 0;
            v31 = (v30 >> v28) - 1 + (SystemInformation[0] >> v28) + v3;
            v23 = this[4].QuadPart >> v28;
            v32 = v31;
            v24 = v23 + this[5].LowPart - 1;
            if ( v23 > v29 )
              v29 = v23;
            if ( v24 >= v31 )
              v24 = v31;
            else
              v32 = v23 + this[5].LowPart - 1;
            if ( v29 <= v24 )
            {
              v33 = v32 - v29;
              v34 = v29 - v23;
              v35 = WdLogNewEntry5_WdEvent(v24, v23);
              *(_QWORD *)(v35 + 24) = v34;
              *(_QWORD *)(v35 + 32) = (unsigned int)(v33 + 1);
              WdLogEvent5_WdEvent(v35);
              QuadPart = (VIDMM_CPU_HOST_APERTURE *)this[61].QuadPart;
              this[11].HighPart = v34;
              this[12].LowPart = v34 + v33;
              v25 = VIDMM_CPU_HOST_APERTURE::BlockRange(
                      QuadPart,
                      (struct VIDMM_CPU_HOST_APERTURE_RANGE *)((char *)&this[11].QuadPart + 4));
            }
            goto LABEL_41;
          }
          v24 = (unsigned int)(LODWORD(SystemInformation[3]) - 3);
          if ( LODWORD(SystemInformation[3]) == 3 )
          {
LABEL_31:
            v26 = 3;
            goto LABEL_32;
          }
          if ( LODWORD(SystemInformation[3]) == 4 )
            goto LABEL_30;
        }
      }
    }
  }
LABEL_41:
  BYTE1(this[59].LowPart) = 1;
  v37 = WdLogNewEntry5_WdEvent(v24, v23);
  WdLogEvent5_WdEvent(v37);
  v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v39, v38);
  v40[3] = this[6].QuadPart;
  v40[4] = this[3].HighPart;
  v40[5] = this[3].LowPart;
  v40[6] = this[2].LowPart;
  WdLogEvent5_WdEvent(v40);
  return (unsigned int)v25;
}
