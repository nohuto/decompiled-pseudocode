/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C00156F0
 * Callers:
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1C0015070 (NtDCompositionProcessChannelBatchBuffer.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C00156F0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C000AEFC (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C000B1DC (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C000B324 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C000B4C8 (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C000B57C (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C000B648 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C000B848 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C000B988 (-OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C000BACC (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C000BBA0 (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00149DC (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C00156F0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0016058 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C0016318 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00164A4 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0016548 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     McTemplateK0qqqqq @ 0x1C00AF1AC (McTemplateK0qqqqq.c)
 *     McTemplateK0x @ 0x1C0145760 (McTemplateK0x.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@II_K@Z @ 0x1C0145F74 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@II_K@Z.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C014633C (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C0147048 (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z.c)
 *     McTemplateK0qqqq @ 0x1C01474E8 (McTemplateK0qqqq.c)
 *     McTemplateK0qx @ 0x1C0147588 (McTemplateK0qx.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        unsigned __int64 this,
        unsigned int *a2,
        __int64 a3,
        char a4,
        unsigned int *a5)
{
  char v5; // r10
  unsigned __int64 v7; // r11
  int AnimationTime; // edi
  unsigned int *v9; // rbx
  unsigned __int128 v10; // rax
  char *v11; // rax
  unsigned __int64 v12; // r8
  struct DirectComposition::CResourceMarshaler *v13; // rbx
  bool v14; // zf
  char *v15; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  char v18; // al
  char *v19; // rax
  __int64 v20; // r8
  unsigned int *v21; // rax
  unsigned int v22; // r11d
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r10
  struct DirectComposition::CResourceMarshaler *v26; // rbx
  unsigned int v27; // r8d
  __int64 v28; // r10
  char *v29; // r9
  __int64 v30; // r8
  unsigned __int64 v32; // rbx
  DirectComposition::CApplicationChannel *v33; // r8
  _QWORD *v34; // r9
  unsigned int v35; // r10d
  char *v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // rax
  struct DirectComposition::CResourceMarshaler *v39; // rbx
  DirectComposition::CApplicationChannel *v40; // r9
  unsigned int v41; // r8d
  unsigned __int64 v42; // r10
  const unsigned int *v43; // r9
  unsigned int *v44; // rax
  struct DirectComposition::CResourceMarshaler *v45; // rbx
  unsigned int *v46; // rax
  const struct tagMsgRoutingInfo *v47; // r9
  unsigned int *v48; // rax
  unsigned int *v49; // rax
  unsigned int *v50; // rax
  unsigned int *v51; // rax
  struct DirectComposition::CResourceMarshaler *v52; // rbx
  char *v53; // rax
  size_t v54; // rax
  size_t v55; // rcx
  void *v56; // r9
  unsigned int *v57; // rax
  unsigned int *v58; // r10
  unsigned int v59; // r8d
  unsigned __int64 v60; // r11
  const unsigned __int64 *v61; // r9
  int v62; // ebx
  char v63; // al
  int v64; // r8d
  unsigned int *v65; // [rsp+20h] [rbp-98h]
  unsigned int v66; // [rsp+40h] [rbp-78h]
  unsigned __int8 v67; // [rsp+44h] [rbp-74h] BYREF
  char v68; // [rsp+45h] [rbp-73h] BYREF
  char v69; // [rsp+46h] [rbp-72h] BYREF
  char v70; // [rsp+47h] [rbp-71h] BYREF
  char v71[4]; // [rsp+48h] [rbp-70h] BYREF
  unsigned int v72; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v73[2]; // [rsp+50h] [rbp-68h]
  char *v74; // [rsp+58h] [rbp-60h]
  struct DirectComposition::CResourceMarshaler *v75; // [rsp+60h] [rbp-58h]
  void *v76; // [rsp+68h] [rbp-50h]
  struct DirectComposition::CResourceMarshaler *v77; // [rsp+70h] [rbp-48h] BYREF
  size_t Size; // [rsp+78h] [rbp-40h]
  struct DirectComposition::CResourceMarshaler *Src; // [rsp+80h] [rbp-38h] BYREF
  __int64 v80; // [rsp+88h] [rbp-30h] BYREF
  __int64 v81; // [rsp+90h] [rbp-28h]
  __int64 v82; // [rsp+98h] [rbp-20h]
  DirectComposition::CApplicationChannel *v83; // [rsp+C0h] [rbp+8h]

  v83 = (DirectComposition::CApplicationChannel *)this;
  v5 = a4;
  v66 = a3;
  v7 = this;
  AnimationTime = 0;
  while ( AnimationTime >= 0 && (unsigned int)a3 >= 4 )
  {
    *((_QWORD *)&v10 + 1) = a5;
    ++*a5;
    v9 = a2;
    v74 = (char *)a2;
    LODWORD(v10) = *a2;
    if ( *a2 == 8 )
    {
      v15 = (char *)a2;
      if ( (unsigned int)a3 < 0x18 )
        goto LABEL_177;
      a2 += 6;
      v66 = a3 - 24;
      v16 = *((_QWORD *)v15 + 2);
      v17 = *((unsigned int *)v15 + 2);
      v73[0] = *((_DWORD *)v15 + 2);
      this = *((unsigned int *)v15 + 1);
      v68 = 0;
      *((_QWORD *)&v10 + 1) = (unsigned int)(this - 1);
      if ( !(_DWORD)this )
        goto LABEL_178;
      if ( *((_QWORD *)&v10 + 1) >= *(_QWORD *)(v7 + 80) )
        goto LABEL_178;
      _mm_lfence();
      this = *((_QWORD *)&v10 + 1) * *(_QWORD *)(v7 + 88);
      v13 = *(struct DirectComposition::CResourceMarshaler **)(this + *(_QWORD *)(v7 + 56));
      if ( !v13 )
        goto LABEL_178;
      AnimationTime = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, unsigned __int64, __int64, __int64, char *))(*(_QWORD *)v13 + 136LL))(
                        v13,
                        v7,
                        v17,
                        v16,
                        &v68);
      if ( AnimationTime >= 0
        && *((_QWORD *)v13 + 4)
        && DirectComposition::CApplicationChannel::UnbindAnimation(v83, v13, v73[0]) )
      {
        v18 = 1;
        v68 = 1;
      }
      else
      {
        v18 = v68;
      }
      if ( AnimationTime >= 0 )
      {
        v14 = v18 == 0;
        goto LABEL_24;
      }
    }
    else
    {
      if ( (_DWORD)v10 == 9 )
      {
        v19 = (char *)a2;
        if ( (unsigned int)a3 < 0x10 )
        {
          AnimationTime = -1073741811;
          goto LABEL_27;
        }
        a2 += 4;
        v66 = a3 - 16;
        v20 = *((unsigned int *)v19 + 2);
        v73[0] = *((_DWORD *)v19 + 2);
        this = *((unsigned int *)v19 + 1);
        v67 = 0;
        *((_QWORD *)&v10 + 1) = (unsigned int)(this - 1);
        if ( (_DWORD)this )
        {
          if ( *((_QWORD *)&v10 + 1) < *(_QWORD *)(v7 + 80) )
          {
            _mm_lfence();
            this = *((_QWORD *)&v10 + 1) * *(_QWORD *)(v7 + 88);
            v13 = *(struct DirectComposition::CResourceMarshaler **)(this + *(_QWORD *)(v7 + 56));
            if ( v13 )
            {
              AnimationTime = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, unsigned __int8 *))(*(_QWORD *)v13 + 144LL))(
                                v13,
                                (unsigned int)v20,
                                v20,
                                &v67);
              if ( AnimationTime >= 0 && *((_QWORD *)v13 + 4) )
              {
                LOBYTE(v10) = DirectComposition::CApplicationChannel::UnbindAnimation(v83, v13, v73[0]);
                this = v67;
                if ( (_BYTE)v10 )
                  this = 1LL;
                v67 = this;
              }
              else
              {
                this = v67;
              }
              if ( AnimationTime < 0 )
                goto LABEL_26;
              v14 = (_BYTE)this == 0;
              goto LABEL_24;
            }
          }
        }
LABEL_178:
        AnimationTime = -1073741790;
        goto LABEL_26;
      }
      if ( (_DWORD)v10 == 13 )
      {
        v21 = a2;
        if ( (unsigned int)a3 < 0x10 )
        {
          AnimationTime = -1073741811;
          goto LABEL_27;
        }
        a2 += 4;
        v66 = a3 - 16;
        *((_QWORD *)&v10 + 1) = v21[3];
        v22 = v21[2];
        v73[0] = v22;
        v72 = v21[1];
        v23 = 0LL;
        this = v72 - 1;
        if ( v72 && this < *((_QWORD *)v83 + 10) )
        {
          _mm_lfence();
          v24 = *((_QWORD *)v83 + 11);
          v25 = *((_QWORD *)v83 + 7);
          v26 = *(struct DirectComposition::CResourceMarshaler **)(this * v24 + v25);
          v75 = v26;
          if ( v26 )
          {
            if ( DWORD2(v10)
              && ((this = (unsigned int)(DWORD2(v10) - 1), this >= *((_QWORD *)v83 + 10))
               || (this *= v24, (v23 = *(_QWORD *)(this + v25)) == 0)) )
            {
              AnimationTime = -1073741811;
            }
            else
            {
              v71[0] = 0;
              AnimationTime = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, __int64, char *))(*(_QWORD *)v26 + 176LL))(
                                v26,
                                v83,
                                v22,
                                v23,
                                v71);
              if ( AnimationTime >= 0 && v71[0] )
                DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(v83, v26);
            }
            goto LABEL_48;
          }
        }
        else
        {
          v26 = 0LL;
          v75 = 0LL;
        }
        AnimationTime = -1073741790;
LABEL_48:
        if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
        {
          LOBYTE(v10) = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v26 + 120LL))(
                          v26,
                          106LL);
          if ( (_BYTE)v10 && ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
          {
            v62 = *((_DWORD *)v26 + 6);
            v63 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v75 + 16LL))(v75);
            McTemplateK0qqqqq(
              v73[0],
              (unsigned int)&DCompResourcePropertyUpdate,
              v64,
              *((_DWORD *)v83 + 7),
              v62,
              v72,
              v63,
              v73[0]);
          }
        }
        goto LABEL_26;
      }
      if ( (_DWORD)v10 != 12 )
      {
        switch ( (int)v10 )
        {
          case 0:
            v52 = 0LL;
            v75 = 0LL;
            v53 = (char *)a2;
            if ( (unsigned int)a3 >= 0x18 && v5 )
            {
              a2 += 6;
              v66 = a3 - 24;
              v76 = (void *)*((_QWORD *)v53 + 1);
              v54 = *((unsigned int *)v53 + 4);
              v72 = v54;
              v73[0] = v54;
              if ( !(_DWORD)v54 )
                AnimationTime = -1073741811;
              this = v54;
              Size = v54;
              if ( AnimationTime >= 0 )
              {
                v52 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuota(v54, 1717715780LL);
                v75 = v52;
                if ( v52 )
                {
                  v55 = Size;
                  v56 = v76;
                  if ( (char *)v76 + Size < v76 || (unsigned __int64)v76 + Size > MmUserProbeAddress )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove(v52, v56, v55);
                  AnimationTime = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
                                    v83,
                                    v52,
                                    v72,
                                    0,
                                    a5);
                }
                else
                {
                  AnimationTime = -1073741801;
                }
              }
            }
            else
            {
              AnimationTime = -1073741811;
            }
            if ( v52 )
              Win32FreePool(v52);
            goto LABEL_26;
          case 1:
            this = (unsigned __int64)a2;
            if ( (unsigned int)a3 < 0x10 )
            {
              AnimationTime = -1073741811;
              goto LABEL_27;
            }
            a2 += 4;
            v66 = a3 - 16;
            v72 = *(_DWORD *)(this + 8);
            v32 = *(unsigned int *)(this + 4);
            if ( *(_DWORD *)(this + 12) )
              LODWORD(v10) = DirectComposition::CApplicationChannel::CreateInternalSharedResource(
                               (DirectComposition::CConnection **)v7,
                               v72,
                               (PVOID *)&v77);
            else
              LODWORD(v10) = DirectComposition::CApplicationChannel::CreateInternalResource(
                               (DirectComposition::CApplicationChannel *)v7,
                               v72,
                               &v77);
            AnimationTime = v10;
            if ( (v10 & 0x80000000) != 0LL )
              goto LABEL_26;
            v33 = v83;
            v34 = (_QWORD *)((char *)v83 + 56);
            v76 = (char *)v83 + 56;
            AnimationTime = 0;
            if ( !(_DWORD)v32 )
            {
              AnimationTime = -1073741811;
              goto LABEL_75;
            }
            *((_QWORD *)&v10 + 1) = v32;
            *(_QWORD *)&v10 = *((_QWORD *)v83 + 10);
            v35 = v32 - 1;
            v73[0] = v32 - 1;
            if ( v32 > (unsigned __int64)v10 )
            {
              AnimationTime = DirectComposition::CDCompDynamicArrayBase::Grow(
                                (DirectComposition::CApplicationChannel *)((char *)v83 + 56),
                                v32 - v10,
                                0x746C4344u);
              v35 = v73[0];
              v34 = v76;
              v33 = v83;
            }
            else
            {
              this = v35 * *((_QWORD *)v83 + 11);
              if ( *(_QWORD *)(this + *v34) )
              {
                AnimationTime = -1073741790;
                goto LABEL_75;
              }
            }
            if ( AnimationTime < 0 )
              goto LABEL_136;
            Src = v77;
            memmove((void *)(*v34 + v34[4] * v35), &Src, v34[4]);
            v33 = v83;
            ++*((_QWORD *)v83 + 12);
LABEL_75:
            if ( AnimationTime < 0 )
            {
LABEL_136:
              DirectComposition::CApplicationChannel::ReleaseResource(v33, v77);
              goto LABEL_26;
            }
            if ( SBYTE4(Microsoft_Windows_Win32kEnableBits) < 0 )
              McTemplateK0qqqq(
                *((_DWORD *)v77 + 6),
                DWORD2(v10),
                (_DWORD)v33,
                *((_DWORD *)v33 + 7),
                *((_DWORD *)v77 + 6),
                v32,
                v72);
            break;
          case 2:
            this = (unsigned __int64)a2;
            if ( (unsigned int)a3 < 0x18 )
            {
              AnimationTime = -1073741811;
            }
            else
            {
              a2 += 6;
              v66 = a3 - 24;
              AnimationTime = DirectComposition::CApplicationChannel::OpenSharedResource(
                                (DirectComposition::CConnection **)v7,
                                *(_DWORD *)(this + 4),
                                *(void **)(this + 8),
                                *(unsigned int *)(this + 16),
                                *(_DWORD *)(this + 20) != 0);
            }
            goto LABEL_27;
          case 3:
            v36 = (char *)a2;
            if ( (unsigned int)a3 < 8 )
            {
              AnimationTime = -1073741811;
              goto LABEL_27;
            }
            a2 += 2;
            v37 = (unsigned int)(a3 - 8);
            v66 = v37;
            this = *((unsigned int *)v36 + 1);
            AnimationTime = 0;
            v38 = (unsigned int)(this - 1);
            v76 = (void *)v38;
            if ( !(_DWORD)this )
              goto LABEL_178;
            if ( v38 >= *(_QWORD *)(v7 + 80) )
              goto LABEL_178;
            _mm_lfence();
            this = v38 * *(_QWORD *)(v7 + 88);
            v39 = *(struct DirectComposition::CResourceMarshaler **)(this + *(_QWORD *)(v7 + 56));
            *(_QWORD *)v73 = v39;
            if ( !v39 )
              goto LABEL_178;
            if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64, __int64, unsigned __int64))(*(_QWORD *)v39 + 120LL))(
                   v39,
                   151LL,
                   v37,
                   0x1C0000000uLL) )
            {
              v45 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v39 + 22);
              if ( v45
                && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v45 + 224LL))(v45) )
              {
                DirectComposition::CApplicationChannel::ReleaseResource(v83, v45);
              }
              v39 = *(struct DirectComposition::CResourceMarshaler **)v73;
            }
            v40 = v83;
            if ( (unsigned __int64)v76 < *((_QWORD *)v83 + 10) )
            {
              v80 = 0LL;
              memmove((void *)(*((_QWORD *)v83 + 7) + (_QWORD)v76 * *((_QWORD *)v83 + 11)), &v80, *((_QWORD *)v83 + 11));
              v40 = v83;
              --*((_QWORD *)v83 + 12);
            }
            DirectComposition::CApplicationChannel::ReleaseResource(v40, v39);
            goto LABEL_26;
          case 4:
            v57 = a2;
            if ( (unsigned int)a3 >= 0x18 )
            {
              a2 += 6;
              v66 = a3 - 24;
              AnimationTime = DirectComposition::CApplicationChannel::GetAnimationTime(
                                (DirectComposition::CApplicationChannel *)v7,
                                v57[1],
                                *((_QWORD *)v57 + 1),
                                (__int64 *)v57 + 2);
            }
            else
            {
              AnimationTime = -1073741811;
            }
            goto LABEL_27;
          case 5:
            this = (unsigned __int64)a2;
            if ( (unsigned int)a3 >= 0x20 )
            {
              a2 += 8;
              v66 = a3 - 32;
              LODWORD(v65) = *(_DWORD *)(this + 16);
              AnimationTime = DirectComposition::CApplicationChannel::CapturePointer(
                                v7,
                                *(unsigned int *)(this + 4),
                                *(unsigned int *)(this + 8),
                                *(unsigned int *)(this + 12),
                                v65,
                                *(_QWORD *)(this + 24));
            }
            else
            {
              AnimationTime = -1073741811;
            }
            goto LABEL_27;
          case 6:
            v50 = a2;
            if ( (unsigned int)a3 < 0x10 )
            {
              AnimationTime = -1073741811;
            }
            else
            {
              a2 += 4;
              v66 = a3 - 16;
              AnimationTime = DirectComposition::CApplicationChannel::OpenSharedResourceHandle(
                                (DirectComposition::CApplicationChannel *)v7,
                                v50[1],
                                (void **)v50 + 1);
            }
            goto LABEL_27;
          case 7:
            v11 = (char *)a2;
            if ( (unsigned int)a3 < 0xC )
            {
              AnimationTime = -1073741811;
              goto LABEL_27;
            }
            a2 += 3;
            v66 = a3 - 12;
            *((_QWORD *)&v10 + 1) = *((unsigned int *)v11 + 2);
            this = *((unsigned int *)v11 + 1);
            v69 = 0;
            v12 = (unsigned int)(this - 1);
            if ( !(_DWORD)this )
              goto LABEL_178;
            if ( v12 >= *(_QWORD *)(v7 + 80) )
              goto LABEL_178;
            _mm_lfence();
            this = v12 * *(_QWORD *)(v7 + 88);
            v13 = *(struct DirectComposition::CResourceMarshaler **)(this + *(_QWORD *)(v7 + 56));
            if ( !v13 )
              goto LABEL_178;
            AnimationTime = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, char *, unsigned __int64))(*(_QWORD *)v13 + 192LL))(
                              v13,
                              *((_QWORD *)&v10 + 1),
                              &v69,
                              0x1C0000000uLL);
            if ( AnimationTime < 0 )
              goto LABEL_26;
            v14 = v69 == 0;
            goto LABEL_24;
          case 10:
            v48 = a2;
            if ( (unsigned int)a3 < 0x18 )
            {
              AnimationTime = -1073741811;
            }
            else
            {
              a2 += 6;
              v66 = a3 - 24;
              AnimationTime = DirectComposition::CApplicationChannel::SetResourceHandleProperty(
                                (DirectComposition::CApplicationChannel *)v7,
                                v48[1],
                                v48[2],
                                *((void **)v48 + 2));
            }
            goto LABEL_27;
          case 11:
            v58 = a2;
            if ( (unsigned int)a3 >= 0x10 )
            {
              a2 += 4;
              v59 = a3 - 16;
              v66 = v59;
              v60 = v58[3];
              v10 = v58[3] * (unsigned __int128)8uLL;
              v82 = *((_QWORD *)&v10 + 1);
              this = v10;
              if ( is_mul_ok(v60, 8uLL) )
              {
                v81 = v10;
                AnimationTime = 0;
              }
              else
              {
                this = -1LL;
                v81 = -1LL;
                AnimationTime = -1073741675;
              }
              if ( AnimationTime >= 0 )
              {
                if ( v59 >= this )
                {
                  v61 = (const unsigned __int64 *)a2;
                  a2 = (unsigned int *)((char *)a2 + this);
                  v66 = v59 - this;
                  AnimationTime = DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
                                    v83,
                                    v58[1],
                                    v58[2],
                                    v61,
                                    v60);
                }
                else
                {
                  AnimationTime = -1073741811;
                }
              }
            }
            else
            {
              AnimationTime = -1073741811;
            }
            goto LABEL_27;
          case 14:
            this = (unsigned __int64)a2;
            if ( (unsigned int)a3 < 0x10 )
            {
              AnimationTime = -1073741811;
              goto LABEL_27;
            }
            a2 += 4;
            v41 = a3 - 16;
            v66 = v41;
            v42 = *(unsigned int *)(this + 12);
            *((_QWORD *)&v10 + 1) = 4 * v42;
            if ( v41 < 4 * v42 )
              goto LABEL_177;
            v43 = a2;
            a2 = (unsigned int *)((char *)a2 + *((_QWORD *)&v10 + 1));
            v66 = v41 - DWORD2(v10);
            LODWORD(v10) = DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
                             (DirectComposition::CApplicationChannel *)v7,
                             *(_DWORD *)(this + 4),
                             *(_DWORD *)(this + 8),
                             v43,
                             v42);
            goto LABEL_89;
          case 15:
            v49 = a2;
            if ( (unsigned int)a3 < 0x10 )
            {
              AnimationTime = -1073741811;
            }
            else
            {
              a2 += 4;
              v66 = a3 - 16;
              AnimationTime = DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
                                (DirectComposition::CApplicationChannel *)v7,
                                v49[1],
                                v49[2],
                                v49[3]);
            }
            goto LABEL_27;
          case 16:
            v46 = a2;
            if ( (unsigned int)a3 < 0x10 )
            {
              AnimationTime = -1073741811;
            }
            else
            {
              a2 += 4;
              v66 = a3 - 16;
              AnimationTime = DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
                                (DirectComposition::CApplicationChannel *)v7,
                                v46[1],
                                *((_QWORD *)v46 + 1));
            }
            goto LABEL_27;
          case 17:
            this = (unsigned __int64)a2;
            if ( (unsigned int)a3 >= 0x14 )
            {
              a2 += 5;
              v66 = a3 - 20;
              LODWORD(v10) = DirectComposition::CApplicationChannel::AddVisualChild(
                               (DirectComposition::CApplicationChannel *)v7,
                               *(_DWORD *)(this + 4),
                               *(_DWORD *)(this + 8),
                               *(_DWORD *)(this + 12),
                               *(_DWORD *)(this + 16));
              goto LABEL_89;
            }
            AnimationTime = -1073741811;
            goto LABEL_27;
          case 18:
            this = (unsigned __int64)a2;
            if ( (unsigned int)a3 < 0x48 )
            {
              AnimationTime = -1073741811;
            }
            else
            {
              a2 += 18;
              v66 = a3 - 72;
              if ( *(_DWORD *)(this + 24) )
                v47 = (const struct tagMsgRoutingInfo *)(this + 32);
              else
                v47 = 0LL;
              AnimationTime = DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
                                (DirectComposition::CApplicationChannel *)v7,
                                *(_DWORD *)(this + 4),
                                *(HWND *)(this + 8),
                                v47,
                                *(_DWORD *)(this + 16),
                                *(_DWORD *)(this + 20));
            }
            goto LABEL_27;
          case 19:
            v51 = a2;
            if ( (unsigned int)a3 < 0x10 )
            {
              AnimationTime = -1073741811;
            }
            else
            {
              a2 += 4;
              v66 = a3 - 16;
              AnimationTime = DirectComposition::CApplicationChannel::SetVisualInputSink(
                                (DirectComposition::CApplicationChannel *)v7,
                                v51[1],
                                *((void **)v51 + 1));
            }
            goto LABEL_27;
          case 20:
            v44 = a2;
            if ( (unsigned int)a3 < 0xC )
            {
              AnimationTime = -1073741811;
            }
            else
            {
              a2 += 3;
              v66 = a3 - 12;
              LODWORD(v10) = DirectComposition::CApplicationChannel::RemoveVisualChild(
                               (DirectComposition::CApplicationChannel *)v7,
                               v44[1],
                               v44[2]);
LABEL_89:
              AnimationTime = v10;
              if ( (v10 & 0x80000000) == 0LL )
                *((_BYTE *)v83 + 241) |= 1u;
            }
            goto LABEL_27;
          default:
            goto LABEL_177;
        }
        goto LABEL_26;
      }
      *((_QWORD *)&v10 + 1) = a2;
      if ( (unsigned int)a3 < 0x10 )
      {
        AnimationTime = -1073741811;
        goto LABEL_27;
      }
      a2 += 4;
      v27 = a3 - 16;
      v66 = v27;
      v28 = *(unsigned int *)(*((_QWORD *)&v10 + 1) + 12LL);
      this = ((_DWORD)v28 + 3) & 0xFFFFFFFC;
      if ( (unsigned int)this < (unsigned int)v28 || v27 < (unsigned int)this )
      {
LABEL_177:
        AnimationTime = -1073741811;
        goto LABEL_27;
      }
      v29 = (char *)a2;
      a2 = (unsigned int *)((char *)a2 + (unsigned int)this);
      v66 = v27 - this;
      v30 = *(unsigned int *)(*((_QWORD *)&v10 + 1) + 8LL);
      this = *(unsigned int *)(*((_QWORD *)&v10 + 1) + 4LL);
      *((_QWORD *)&v10 + 1) = (unsigned int)(this - 1);
      if ( !(_DWORD)this )
        goto LABEL_178;
      if ( *((_QWORD *)&v10 + 1) >= *(_QWORD *)(v7 + 80) )
        goto LABEL_178;
      _mm_lfence();
      this = *((_QWORD *)&v10 + 1) * *(_QWORD *)(v7 + 88);
      v13 = *(struct DirectComposition::CResourceMarshaler **)(this + *(_QWORD *)(v7 + 56));
      if ( !v13 )
        goto LABEL_178;
      v70 = 0;
      AnimationTime = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, unsigned __int64, __int64, char *, __int64, char *))(*(_QWORD *)v13 + 168LL))(
                        v13,
                        v7,
                        v30,
                        v29,
                        v28,
                        &v70);
      if ( AnimationTime >= 0 )
      {
        v14 = v70 == 0;
LABEL_24:
        if ( !v14 )
          DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(v83, v13);
      }
    }
LABEL_26:
    v9 = (unsigned int *)v74;
LABEL_27:
    a3 = v66;
    v7 = (unsigned __int64)v83;
    v5 = a4;
    if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    {
      McTemplateK0qx(this, *((_QWORD *)&v10 + 1), v66, *v9, AnimationTime);
      a3 = v66;
      v7 = (unsigned __int64)v83;
      v5 = a4;
    }
  }
  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
  {
    McTemplateK0x(this, &DCompCommandsInBatch, a3, *a5);
    LODWORD(a3) = v66;
    v7 = (unsigned __int64)v83;
  }
  if ( AnimationTime >= 0 )
  {
    if ( *a5 > 0x32 )
      *(_BYTE *)(v7 + 241) |= 1u;
    if ( (_DWORD)a3 )
      return (unsigned int)-1073741811;
  }
  return (unsigned int)AnimationTime;
}
