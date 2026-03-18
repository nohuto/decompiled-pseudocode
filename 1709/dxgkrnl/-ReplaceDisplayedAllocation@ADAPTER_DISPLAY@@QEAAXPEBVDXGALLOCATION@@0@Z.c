/*
 * XREFs of ?ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z @ 0x1C00ABC2C
 * Callers:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0003DEC (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0ppqqt @ 0x1C0020E94 (McTemplateK0ppqqt.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C00F8BA8 (-GetPreviousConfigIndex@@YAHH@Z.c)
 *     ?GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z @ 0x1C00FA354 (-GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ReplaceDisplayedAllocation(
        ADAPTER_DISPLAY *this,
        const struct DXGALLOCATION *a2,
        const struct DXGALLOCATION *a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rcx
  unsigned int v7; // r14d
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // r8d
  char v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _DISPLAY_PLANE_CONFIG *DisplayPlaneConfigHead; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 PreviousConfigIndex; // r15
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // [rsp+28h] [rbp-70h]
  __int64 v27; // [rsp+30h] [rbp-68h]
  __int64 v28; // [rsp+38h] [rbp-60h]
  _BYTE v29[80]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int i; // [rsp+A0h] [rbp+8h]
  const struct DXGALLOCATION *v31; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+20h]

  v31 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (ADAPTER_DISPLAY *)((char *)this + 400));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  v5 = 0;
  for ( i = 0; v5 < *((_DWORD *)this + 20); i = v5 )
  {
    v6 = *((_QWORD *)this + 14);
    v7 = 0;
    v8 = 3760LL * v5;
    if ( *(_DWORD *)(v8 + v6 + 3736) )
    {
      do
      {
        LODWORD(v31) = 0;
        v11 = 1;
        v32 = v8 + 168LL * v7;
        DisplayPlaneConfigHead = GetDisplayPlaneConfigHead(
                                   (struct _DISPLAY_PLANE_CONFIG_QUEUE *)(v32 + v6 + 1120),
                                   (int *)&v31);
        if ( DisplayPlaneConfigHead )
        {
          LODWORD(PreviousConfigIndex) = (_DWORD)v31;
          while ( *(const struct DXGALLOCATION **)DisplayPlaneConfigHead != a2 )
          {
            v11 = v17;
            v19 = v16 + *((_QWORD *)this + 14);
            if ( *(_DWORD *)(v19 + 1120) == -1 )
            {
              v20 = WdLogNewEntry5_WdAssertion(v13);
              *(_QWORD *)(v20 + 24) = 8190LL;
              WdLogEvent5_WdAssertion(v20);
            }
            if ( *(_DWORD *)(v19 + 1124) == -1 )
            {
              v21 = WdLogNewEntry5_WdAssertion(v13);
              *(_QWORD *)(v21 + 24) = 0x1FFFLL;
              WdLogEvent5_WdAssertion(v21);
            }
            if ( (_DWORD)PreviousConfigIndex == *(_DWORD *)(v19 + 1124) )
              goto LABEL_20;
            PreviousConfigIndex = (int)GetPreviousConfigIndex(PreviousConfigIndex);
            v17 = 0LL;
            v13 = 80 * PreviousConfigIndex;
            DisplayPlaneConfigHead = (struct _DISPLAY_PLANE_CONFIG *)(80 * PreviousConfigIndex + v19 + 1128);
            if ( !DisplayPlaneConfigHead )
              goto LABEL_20;
            v16 = v32;
          }
          *(_QWORD *)DisplayPlaneConfigHead = v17;
          if ( v11 )
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v15);
            v22[4] = v5;
            v22[5] = v7;
            v22[3] = a2;
            WdLogEvent5_WdWarning(v22);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              v25 = *((_QWORD *)this + 14);
              LODWORD(v28) = *(unsigned __int8 *)(v25 + v8 + 721);
              LODWORD(v27) = v7;
              LODWORD(v26) = v5;
              McTemplateK0ppqqt(
                *(unsigned __int8 *)(v25 + v8 + 721),
                v23,
                v24,
                *((_QWORD *)this + 2),
                a2,
                v26,
                v27,
                v28);
            }
          }
          *((_DWORD *)DisplayPlaneConfigHead + 2) &= ~1u;
        }
LABEL_20:
        v6 = *((_QWORD *)this + 14);
        ++v7;
      }
      while ( v7 < *(_DWORD *)(v8 + v6 + 3736) );
    }
    v9 = *((_QWORD *)this + 14);
    v10 = 0;
    if ( *(_DWORD *)(v8 + v9 + 3740) )
    {
      do
      {
        if ( *(_BYTE *)(v10 + v8 + v9 + 2880)
          && (*(_DWORD *)(v9 + 80 * (v10 + 47LL * v5) + 2904) & 1) != 0
          && *(const struct DXGALLOCATION **)(v9 + 80 * (v10 + 47LL * v5) + 2896) == a2 )
        {
          *(_QWORD *)(v9 + 80 * (v10 + 47LL * v5) + 2896) = 0LL;
          *(_BYTE *)(v10 + *((_QWORD *)this + 14) + v8 + 2880) = 0;
          *(_DWORD *)(*((_QWORD *)this + 14) + 80 * (v10 + 47LL * v5) + 2904) &= ~1u;
        }
        v9 = *((_QWORD *)this + 14);
        ++v10;
      }
      while ( v10 < *(_DWORD *)(v8 + v9 + 3740) );
      v5 = i;
    }
    ++v5;
  }
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
}
