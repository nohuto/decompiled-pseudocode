/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002E240
 * Callers:
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1C002B040 (NtDCompositionProcessChannelBatchBuffer.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002E240 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0003060 (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C000312C (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C0027040 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002E240 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB48 (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C002FE30 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C002FF78 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C0030160 (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0030214 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C0030334 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C003051C (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C003060C (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C0030700 (-OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0030844 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0030918 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C00316B4 (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     McTemplateK0qqqqq @ 0x1C00E3840 (McTemplateK0qqqqq.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@II_K@Z @ 0x1C013FD18 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@II_K@Z.c)
 *     McTemplateK0qqqq @ 0x1C01407F8 (McTemplateK0qqqq.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        size_t *this,
        char *a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  char v5; // r10
  char *v7; // r8
  size_t *v8; // r11
  int inserted; // edi
  unsigned int *v10; // r9
  unsigned int v11; // eax
  char *v12; // rax
  __int64 v13; // rdx
  int v14; // ecx
  size_t v15; // r9
  size_t v16; // rbx
  int v17; // eax
  char *v18; // rax
  __int64 v19; // r9
  unsigned int v20; // r10d
  int v21; // ecx
  size_t v22; // rdx
  struct DirectComposition::CResourceMarshaler *v23; // rbx
  char v24; // al
  int v25; // eax
  char *v26; // rax
  unsigned int v27; // r10d
  int v28; // ecx
  size_t v29; // rdx
  struct DirectComposition::CResourceMarshaler *v30; // rbx
  char v31; // al
  int v32; // eax
  char *v33; // rdx
  __int64 v34; // r10
  unsigned int v35; // ecx
  char *v36; // r9
  unsigned int v37; // r11d
  int v38; // ecx
  size_t v39; // rdx
  size_t v40; // rbx
  int v41; // eax
  char *v42; // rax
  int v43; // edx
  unsigned int v44; // edi
  __int64 v45; // r9
  size_t v46; // rcx
  size_t v47; // r10
  size_t v48; // r11
  _DWORD *v49; // rbx
  size_t v50; // rcx
  int v51; // eax
  unsigned int v53; // ebx
  int v54; // eax
  unsigned int v55; // r8d
  struct DirectComposition::CResourceMarshaler *v56; // rbx
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  char *v60; // rax
  int v61; // ecx
  unsigned __int64 v62; // rax
  struct DirectComposition::CResourceMarshaler *v63; // rbx
  DirectComposition::CApplicationChannel *v64; // r9
  __int64 v65; // rcx
  size_t *v66; // rdx
  __int64 v67; // rcx
  size_t *v68; // rdx
  __int64 v69; // rcx
  size_t *v70; // rdx
  unsigned int *v71; // rcx
  unsigned __int64 v72; // r10
  __int64 v73; // rdx
  struct DirectComposition::CResourceMarshaler *v74; // rbx
  __int64 v75; // rcx
  size_t *v76; // rdx
  __int64 v77; // rcx
  size_t *v78; // rdx
  const struct tagMsgRoutingInfo *v79; // r9
  _DWORD *v80; // rbx
  char *v81; // rax
  __int64 v82; // rax
  unsigned int v83; // eax
  void *v84; // rdx
  char *v85; // rcx
  int v86; // ebx
  char v87; // al
  int v88; // r8d
  unsigned int *v89; // [rsp+20h] [rbp-A8h]
  char *v90; // [rsp+40h] [rbp-88h]
  char v91; // [rsp+48h] [rbp-80h] BYREF
  char v92; // [rsp+49h] [rbp-7Fh] BYREF
  char v93; // [rsp+4Ah] [rbp-7Eh] BYREF
  char v94; // [rsp+4Bh] [rbp-7Dh] BYREF
  char v95[4]; // [rsp+4Ch] [rbp-7Ch] BYREF
  size_t Size; // [rsp+50h] [rbp-78h]
  unsigned int v97[2]; // [rsp+58h] [rbp-70h]
  _DWORD *v98; // [rsp+60h] [rbp-68h]
  void *v99; // [rsp+68h] [rbp-60h]
  struct DirectComposition::CResourceMarshaler *v100; // [rsp+70h] [rbp-58h] BYREF
  __int64 Src; // [rsp+78h] [rbp-50h] BYREF
  size_t *v102; // [rsp+80h] [rbp-48h]
  size_t *v103; // [rsp+88h] [rbp-40h]
  size_t *v104; // [rsp+90h] [rbp-38h]
  size_t *v105; // [rsp+98h] [rbp-30h]
  size_t *v106; // [rsp+A0h] [rbp-28h]

  v5 = a4;
  v7 = a2;
  v90 = a2;
  v8 = this;
  v106 = this;
  v105 = this;
  v104 = this;
  v103 = this;
  v102 = this;
  inserted = 0;
  while ( inserted >= 0 )
  {
    if ( a3 < 4 )
    {
      if ( a3 )
        return (unsigned int)-1073741811;
      return (unsigned int)inserted;
    }
    v10 = a5;
    ++*a5;
    v11 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 == 8 )
    {
      v18 = v7;
      if ( a3 >= 0x18 )
      {
        v7 += 24;
        v90 = v7;
        a3 -= 24;
        v19 = *((_QWORD *)v18 + 2);
        v20 = *((_DWORD *)v18 + 2);
        v97[0] = v20;
        v21 = *((_DWORD *)v18 + 1);
        v92 = 0;
        v22 = (unsigned int)(v21 - 1);
        if ( !v21 )
          goto LABEL_187;
        if ( v22 >= v8[10] )
          goto LABEL_187;
        _mm_lfence();
        v23 = *(struct DirectComposition::CResourceMarshaler **)(v22 * v8[11] + v8[7]);
        if ( !v23 )
          goto LABEL_187;
        inserted = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, size_t *, _QWORD, __int64, char *))(*(_QWORD *)v23 + 136LL))(
                     v23,
                     v8,
                     v20,
                     v19,
                     &v92);
        if ( inserted >= 0
          && *((_QWORD *)v23 + 4)
          && DirectComposition::CApplicationChannel::UnbindAnimation(
               (DirectComposition::CApplicationChannel *)this,
               v23,
               v97[0]) )
        {
          v24 = 1;
          v92 = 1;
        }
        else
        {
          v24 = v92;
        }
        if ( inserted < 0 )
          goto LABEL_29;
        if ( !v24 )
          goto LABEL_29;
        v25 = *((_DWORD *)v23 + 4);
        if ( (v25 & 2) != 0 )
          goto LABEL_29;
        if ( (v25 & 9) == 1 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v23 + 120LL))(
                 v23,
                 118LL) )
          {
            v69 = 52LL;
          }
          else
          {
            v69 = 51LL;
          }
          v70 = v106;
          *((_QWORD *)v23 + 1) = v106[v69];
          v70[v69] = (size_t)v23;
        }
        *((_DWORD *)v23 + 4) |= 2u;
        v8 = this;
        *((_BYTE *)this + 240) |= 1u;
        v7 = v90;
        goto LABEL_31;
      }
LABEL_194:
      inserted = -1073741811;
    }
    else
    {
      switch ( v11 )
      {
        case 9u:
          v26 = v7;
          if ( a3 >= 0x10 )
          {
            v7 += 16;
            v90 = v7;
            a3 -= 16;
            v27 = *((_DWORD *)v26 + 2);
            v97[0] = v27;
            v28 = *((_DWORD *)v26 + 1);
            v91 = 0;
            v29 = (unsigned int)(v28 - 1);
            if ( !v28 )
              goto LABEL_187;
            if ( v29 >= v8[10] )
              goto LABEL_187;
            _mm_lfence();
            v30 = *(struct DirectComposition::CResourceMarshaler **)(v29 * v8[11] + v8[7]);
            if ( !v30 )
              goto LABEL_187;
            inserted = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, char *, char *))(*(_QWORD *)v30 + 144LL))(
                         v30,
                         v27,
                         v7,
                         &v91);
            if ( inserted >= 0
              && *((_QWORD *)v30 + 4)
              && DirectComposition::CApplicationChannel::UnbindAnimation(
                   (DirectComposition::CApplicationChannel *)this,
                   v30,
                   v97[0]) )
            {
              v31 = 1;
              v91 = 1;
            }
            else
            {
              v31 = v91;
            }
            if ( inserted < 0 )
              goto LABEL_29;
            if ( !v31 )
              goto LABEL_29;
            v32 = *((_DWORD *)v30 + 4);
            if ( (v32 & 2) != 0 )
              goto LABEL_29;
            if ( (v32 & 9) == 1 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v30 + 120LL))(
                     v30,
                     118LL) )
              {
                v67 = 52LL;
              }
              else
              {
                v67 = 51LL;
              }
              v68 = v105;
              *((_QWORD *)v30 + 1) = v105[v67];
              v68[v67] = (size_t)v30;
            }
            *((_DWORD *)v30 + 4) |= 2u;
            v8 = this;
            *((_BYTE *)this + 240) |= 1u;
            v7 = v90;
            goto LABEL_31;
          }
          inserted = -1073741811;
          break;
        case 0xBu:
          v33 = v7;
          if ( a3 >= 0x10 )
          {
            v7 += 16;
            v90 = v7;
            a3 -= 16;
            v34 = *((unsigned int *)v33 + 3);
            v35 = (v34 + 3) & 0xFFFFFFFC;
            if ( v35 < (unsigned int)v34 || a3 < v35 )
            {
LABEL_191:
              inserted = -1073741811;
            }
            else
            {
              v36 = v7;
              v7 += v35;
              v90 = v7;
              a3 -= v35;
              v37 = *((_DWORD *)v33 + 2);
              v38 = *((_DWORD *)v33 + 1);
              v39 = (unsigned int)(v38 - 1);
              if ( !v38 || v39 >= this[10] || (_mm_lfence(), (v40 = *(_QWORD *)(v39 * this[11] + this[7])) == 0) )
              {
                inserted = -1073741790;
                goto LABEL_30;
              }
              v95[0] = 0;
              inserted = (*(__int64 (__fastcall **)(size_t, size_t *, _QWORD, char *, __int64, char *))(*(_QWORD *)v40 + 160LL))(
                           v40,
                           this,
                           v37,
                           v36,
                           v34,
                           v95);
              if ( inserted >= 0 && v95[0] && (v41 = *(_DWORD *)(v40 + 16), (v41 & 2) == 0) )
              {
                if ( (v41 & 9) == 1 )
                {
                  if ( (*(unsigned __int8 (__fastcall **)(size_t, __int64))(*(_QWORD *)v40 + 120LL))(v40, 118LL) )
                    v65 = 52LL;
                  else
                    v65 = 51LL;
                  v66 = v104;
                  *(_QWORD *)(v40 + 8) = v104[v65];
                  v66[v65] = v40;
                }
                *(_DWORD *)(v40 + 16) |= 2u;
                v8 = this;
                *((_BYTE *)this + 240) |= 1u;
              }
              else
              {
                v8 = this;
              }
              v7 = v90;
            }
            goto LABEL_31;
          }
          inserted = -1073741811;
          break;
        case 0xCu:
          v42 = v7;
          if ( a3 < 0x10 )
          {
            inserted = -1073741811;
          }
          else
          {
            v7 += 16;
            v90 = v7;
            a3 -= 16;
            v43 = *((_DWORD *)v42 + 3);
            v44 = *((_DWORD *)v42 + 2);
            v97[0] = v44;
            LODWORD(Size) = *((_DWORD *)v42 + 1);
            v94 = 0;
            v45 = 0LL;
            v46 = (unsigned int)(Size - 1);
            if ( !(_DWORD)Size || v46 >= v8[10] )
              goto LABEL_187;
            _mm_lfence();
            v47 = v8[11];
            v48 = v8[7];
            v49 = *(_DWORD **)(v46 * v47 + v48);
            v98 = v49;
            if ( !v49 )
            {
              v8 = this;
LABEL_187:
              inserted = -1073741790;
              goto LABEL_31;
            }
            if ( v43 )
            {
              v50 = (unsigned int)(v43 - 1);
              if ( v50 >= this[10] || (v45 = *(_QWORD *)(v47 * v50 + v48)) == 0 )
              {
                inserted = -1073741811;
                goto LABEL_30;
              }
            }
            inserted = (*(__int64 (__fastcall **)(_DWORD *, size_t *, _QWORD, __int64, char *))(*(_QWORD *)v49 + 168LL))(
                         v49,
                         this,
                         v44,
                         v45,
                         &v94);
            if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x200000) != 0
              && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v49 + 120LL))(v49, 98LL)
              && ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
            {
              v86 = v49[6];
              v87 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v98 + 16LL))(v98);
              McTemplateK0qqqqq(
                v97[0],
                (unsigned int)&DCompResourcePropertyUpdate,
                v88,
                *((_DWORD *)this + 7),
                v86,
                Size,
                v87,
                v97[0]);
              v49 = v98;
            }
            if ( inserted < 0 || !v94 || (v51 = v49[4], (v51 & 2) != 0) )
            {
LABEL_29:
              v7 = v90;
LABEL_30:
              v8 = this;
              goto LABEL_31;
            }
            if ( (v51 & 9) == 1 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v49 + 120LL))(v49, 118LL) )
                v75 = 52LL;
              else
                v75 = 51LL;
              v76 = v103;
              *((_QWORD *)v49 + 1) = v103[v75];
              v76[v75] = (size_t)v49;
            }
            v49[4] |= 2u;
            v8 = this;
            *((_BYTE *)this + 240) |= 1u;
            v7 = v90;
LABEL_31:
            v5 = a4;
          }
          break;
        default:
          switch ( v11 )
          {
            case 0u:
              v80 = 0LL;
              v98 = 0LL;
              v81 = v7;
              if ( a3 >= 0x18 && v5 )
              {
                v7 += 24;
                v90 = v7;
                a3 -= 24;
                v99 = (void *)*((_QWORD *)v81 + 1);
                v82 = *((unsigned int *)v81 + 4);
                LODWORD(Size) = v82;
                v97[0] = v82;
                if ( !(_DWORD)v82 )
                  inserted = -1073741811;
                if ( inserted >= 0 )
                {
                  v80 = (_DWORD *)Win32AllocPoolWithQuota(v82, 0x66624344u);
                  v98 = v80;
                  v7 = v90;
                  v8 = this;
                  v5 = a4;
                  if ( !v80 )
                  {
                    inserted = -1073741801;
                    goto LABEL_156;
                  }
                  v83 = Size;
                  v84 = v99;
                  v85 = (char *)v99 + (unsigned int)Size;
                  if ( v85 < v99 || (unsigned __int64)v85 > MmUserProbeAddress )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove(v80, v84, v83);
                  v7 = v90;
                  LODWORD(v82) = Size;
                  v10 = a5;
                  v8 = this;
                  v5 = a4;
                }
                if ( inserted >= 0 )
                {
                  inserted = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
                               (DirectComposition::CApplicationChannel *)v8,
                               v80,
                               v82,
                               0,
                               v10);
                  v7 = v90;
                  v8 = this;
                  v5 = a4;
                }
              }
              else
              {
                inserted = -1073741811;
              }
LABEL_156:
              if ( !v80 )
                continue;
              Win32FreePool(v80, 0x1C0000000uLL, v7);
              goto LABEL_29;
            case 1u:
              if ( a3 < 0x10 )
              {
                inserted = -1073741811;
                continue;
              }
              v90 = v7 + 16;
              a3 -= 16;
              v97[0] = *((_DWORD *)v7 + 2);
              v53 = *((_DWORD *)v7 + 1);
              LODWORD(Size) = v53;
              if ( *((_DWORD *)v7 + 3) )
                v54 = DirectComposition::CApplicationChannel::CreateInternalSharedResource(
                        (DirectComposition::CApplicationChannel *)v8,
                        v97[0],
                        &v100);
              else
                v54 = DirectComposition::CApplicationChannel::CreateInternalResource(
                        (DirectComposition::CApplicationChannel *)v8,
                        v97[0],
                        &v100);
              inserted = v54;
              if ( v54 >= 0 )
              {
                v55 = v53;
                v56 = v100;
                inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
                             (DirectComposition::CLinearObjectTableBase *)(this + 7),
                             v100,
                             v55);
                if ( inserted < 0 )
                {
                  DirectComposition::CApplicationChannel::ReleaseResource(
                    (DirectComposition::CApplicationChannel *)this,
                    v56);
                }
                else if ( SBYTE4(Microsoft_Windows_Win32kEnableBits) < 0 )
                {
                  McTemplateK0qqqq(v58, v57, v59, *((_DWORD *)this + 7), *((_DWORD *)v56 + 6), Size, v97[0]);
                }
              }
              goto LABEL_29;
            case 2u:
              if ( a3 >= 0x18 )
              {
                v90 = v7 + 24;
                a3 -= 24;
                inserted = DirectComposition::CApplicationChannel::OpenSharedResource(
                             (DirectComposition::CApplicationChannel *)v8,
                             *((_DWORD *)v7 + 1),
                             *((void **)v7 + 1),
                             *((_DWORD *)v7 + 4),
                             *((_DWORD *)v7 + 5) != 0);
                goto LABEL_29;
              }
              inserted = -1073741811;
              continue;
            case 3u:
              v60 = v7;
              if ( a3 < 8 )
              {
                inserted = -1073741811;
                continue;
              }
              v7 += 8;
              v90 = v7;
              a3 -= 8;
              v61 = *((_DWORD *)v60 + 1);
              inserted = 0;
              v62 = (unsigned int)(v61 - 1);
              v99 = (void *)v62;
              if ( !v61
                || v62 >= v8[10]
                || (_mm_lfence(),
                    v63 = *(struct DirectComposition::CResourceMarshaler **)(v62 * v8[11] + v8[7]),
                    (*(_QWORD *)v97 = v63) == 0LL) )
              {
                inserted = -1073741790;
                continue;
              }
              if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v63 + 120LL))(
                     v63,
                     134LL) )
              {
                v74 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v63 + 20);
                if ( v74
                  && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v74 + 216LL))(v74) )
                {
                  DirectComposition::CApplicationChannel::ReleaseResource(
                    (DirectComposition::CApplicationChannel *)this,
                    v74);
                }
                v63 = *(struct DirectComposition::CResourceMarshaler **)v97;
              }
              v64 = (DirectComposition::CApplicationChannel *)this;
              if ( (unsigned __int64)v99 < this[10] )
              {
                Src = 0LL;
                memmove((void *)(this[7] + (_QWORD)v99 * this[11]), &Src, this[11]);
                v64 = (DirectComposition::CApplicationChannel *)this;
                --this[12];
              }
              DirectComposition::CApplicationChannel::ReleaseResource(v64, v63);
              goto LABEL_29;
            case 4u:
              if ( a3 >= 0x18 )
              {
                v90 = v7 + 24;
                a3 -= 24;
                inserted = DirectComposition::CApplicationChannel::GetAnimationTime(
                             (DirectComposition::CApplicationChannel *)v8,
                             *((_DWORD *)v7 + 1),
                             *((_QWORD *)v7 + 1),
                             (__int64 *)v7 + 2);
                goto LABEL_29;
              }
              inserted = -1073741811;
              continue;
            case 5u:
              if ( a3 < 0x20 )
              {
                inserted = -1073741811;
                continue;
              }
              v90 = v7 + 32;
              a3 -= 32;
              LODWORD(v89) = *((_DWORD *)v7 + 4);
              inserted = DirectComposition::CApplicationChannel::CapturePointer(
                           v8,
                           *((unsigned int *)v7 + 1),
                           *((unsigned int *)v7 + 2),
                           *((unsigned int *)v7 + 3),
                           v89,
                           *((_QWORD *)v7 + 3));
              goto LABEL_29;
            case 6u:
              if ( a3 >= 0x10 )
              {
                v90 = v7 + 16;
                a3 -= 16;
                inserted = DirectComposition::CApplicationChannel::OpenSharedResourceHandle(
                             (DirectComposition::CApplicationChannel *)v8,
                             *((_DWORD *)v7 + 1),
                             (void **)v7 + 1);
                goto LABEL_29;
              }
              inserted = -1073741811;
              continue;
            case 7u:
              v12 = v7;
              if ( a3 < 0xC )
              {
                inserted = -1073741811;
              }
              else
              {
                v7 += 12;
                v90 = v7;
                a3 -= 12;
                v13 = *((unsigned int *)v12 + 2);
                v14 = *((_DWORD *)v12 + 1);
                v93 = 0;
                v15 = (unsigned int)(v14 - 1);
                if ( v14 && v15 < v8[10] && (_mm_lfence(), (v16 = *(_QWORD *)(v15 * v8[11] + v8[7])) != 0) )
                {
                  inserted = (*(__int64 (__fastcall **)(size_t, __int64, char *))(*(_QWORD *)v16 + 184LL))(
                               v16,
                               v13,
                               &v93);
                  if ( inserted < 0 || !v93 || (v17 = *(_DWORD *)(v16 + 16), (v17 & 2) != 0) )
                  {
                    v8 = this;
                  }
                  else
                  {
                    if ( (v17 & 9) == 1 )
                    {
                      if ( (*(unsigned __int8 (__fastcall **)(size_t, __int64))(*(_QWORD *)v16 + 120LL))(v16, 118LL) )
                        v77 = 52LL;
                      else
                        v77 = 51LL;
                      v78 = v102;
                      *(_QWORD *)(v16 + 8) = v102[v77];
                      v78[v77] = v16;
                    }
                    *(_DWORD *)(v16 + 16) |= 2u;
                    v8 = this;
                    *((_BYTE *)this + 240) |= 1u;
                  }
                  v5 = a4;
                  v7 = v90;
                }
                else
                {
                  inserted = -1073741790;
                }
              }
              continue;
            case 0xAu:
              if ( a3 >= 0x18 )
              {
                v90 = v7 + 24;
                a3 -= 24;
                inserted = DirectComposition::CApplicationChannel::SetResourceHandleProperty(
                             (DirectComposition::CApplicationChannel *)v8,
                             *((_DWORD *)v7 + 1),
                             *((_DWORD *)v7 + 2),
                             *((void **)v7 + 2));
                goto LABEL_29;
              }
              inserted = -1073741811;
              continue;
            case 0xDu:
              v71 = (unsigned int *)v7;
              if ( a3 < 0x10 )
              {
                inserted = -1073741811;
                continue;
              }
              v7 += 16;
              v90 = v7;
              a3 -= 16;
              v72 = v71[3];
              v73 = 4 * v72;
              if ( a3 < 4 * v72 )
                goto LABEL_191;
              v90 = &v7[v73];
              a3 -= v73;
              inserted = DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
                           (DirectComposition::CApplicationChannel *)v8,
                           v71[1],
                           v71[2],
                           (const unsigned int *)v7,
                           v72);
              goto LABEL_29;
            case 0xEu:
              if ( a3 >= 0x10 )
              {
                v90 = v7 + 16;
                a3 -= 16;
                inserted = DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
                             (DirectComposition::CApplicationChannel *)v8,
                             *((_DWORD *)v7 + 1),
                             *((_DWORD *)v7 + 2),
                             *((_DWORD *)v7 + 3));
                goto LABEL_29;
              }
              inserted = -1073741811;
              continue;
            case 0xFu:
              if ( a3 >= 0x10 )
              {
                v90 = v7 + 16;
                a3 -= 16;
                inserted = DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
                             (DirectComposition::CApplicationChannel *)v8,
                             *((_DWORD *)v7 + 1),
                             *((_QWORD *)v7 + 1));
                goto LABEL_29;
              }
              inserted = -1073741811;
              continue;
            case 0x10u:
              if ( a3 >= 0x14 )
              {
                v90 = v7 + 20;
                a3 -= 20;
                inserted = DirectComposition::CApplicationChannel::AddVisualChild(
                             (DirectComposition::CApplicationChannel *)v8,
                             *((_DWORD *)v7 + 1),
                             *((_DWORD *)v7 + 2),
                             *((_DWORD *)v7 + 3),
                             *((_DWORD *)v7 + 4));
                goto LABEL_29;
              }
              inserted = -1073741811;
              continue;
            case 0x11u:
              if ( a3 < 0x48 )
              {
                inserted = -1073741811;
                continue;
              }
              v90 = v7 + 72;
              a3 -= 72;
              if ( *((_DWORD *)v7 + 6) )
                v79 = (const struct tagMsgRoutingInfo *)(v7 + 32);
              else
                v79 = 0LL;
              inserted = DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
                           (DirectComposition::CApplicationChannel *)v8,
                           *((_DWORD *)v7 + 1),
                           *((HWND *)v7 + 1),
                           v79,
                           *((_DWORD *)v7 + 4),
                           *((_DWORD *)v7 + 5));
              goto LABEL_29;
            case 0x12u:
              if ( a3 >= 0x10 )
              {
                v90 = v7 + 16;
                a3 -= 16;
                inserted = DirectComposition::CApplicationChannel::SetVisualInputSink(
                             (DirectComposition::CApplicationChannel *)v8,
                             *((_DWORD *)v7 + 1),
                             *((void **)v7 + 1));
                goto LABEL_29;
              }
              inserted = -1073741811;
              continue;
            case 0x13u:
              if ( a3 >= 0xC )
              {
                v90 = v7 + 12;
                a3 -= 12;
                inserted = DirectComposition::CApplicationChannel::RemoveVisualChild(
                             (DirectComposition::CApplicationChannel *)v8,
                             *((_DWORD *)v7 + 1),
                             *((_DWORD *)v7 + 2));
                goto LABEL_29;
              }
              inserted = -1073741811;
              break;
            default:
              goto LABEL_194;
          }
          break;
      }
    }
  }
  return (unsigned int)inserted;
}
